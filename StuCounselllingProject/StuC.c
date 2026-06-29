#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cJSON.h"
#include "cJSON.c"

void College();
void Student();

void College() {
    int ch;
    printf("\n---Menu:---\n");
    printf("1. Add College\n");
    printf("2. Display Avaiable Colleges\n");
    printf("3. Delete Colleges\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    getchar();
    printf("\n");
    
    //& Creating a json file
    FILE *fp;
    fp = fopen("college.json", "a+");
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }
    fclose(fp);

    switch (ch) {
        case 1:{

            //& Read the existing JSON file
            fp = fopen("college.json", "r");
            if (fp == NULL)
            {
                printf("Error: Could not open people.json for reading.\n");
                exit(1);
            }

            //& Get the file size to allocate the right amount of memory
            long fileSize;
            char *fileBuffer;
            fseek(fp, 0, SEEK_END);
            fileSize = ftell(fp);
            fseek(fp, 0, SEEK_SET);

            fileBuffer = (char *)malloc(fileSize + 1);
            fread(fileBuffer, 1, fileSize, fp);
            fileBuffer[fileSize] = '\0'; // Null-terminate the string
            fclose(fp);                // Close the file for now [cite: 1479]

            //& Parse the JSON string into a cJSON object [cite: 1480]
            cJSON *rootArray = cJSON_Parse(fileBuffer);
            free(fileBuffer); // We don't need the raw string buffer anymore

            if (rootArray == NULL)
            {
                const char *error_ptr = cJSON_GetErrorPtr();
                if (error_ptr != NULL)
                {
                    printf("Error parsing JSON before: %s\n", error_ptr);
                }
                exit(1);
            }

            //& Ensure the root is actually an array before trying to append to it
            if (!cJSON_IsArray(rootArray))
            {
                // 1. Create the root array
                cJSON *rootArray = cJSON_CreateArray();
                if (rootArray == NULL)
                {
                    printf("Failed to create root array.\n");
                    exit(1);
                }
            }

            //& Take input from user
            printf("Enter College Name: ");
            char nameTemp[50];
            scanf("%[^\n]", nameTemp);
            getchar();
            printf("Enter Cutoff: ");
            int cutoff;
            scanf("%d", &cutoff);
            getchar();

            //& Create a new object to add
            cJSON *newCol = cJSON_CreateObject();
            cJSON_AddStringToObject(newCol, "Name", nameTemp);
            cJSON_AddNumberToObject(newCol, "Cutoff", cutoff);

            //& Append the new object to the root array
            cJSON_AddItemToArray(rootArray, newCol);

            //& Convert the modified cJSON array back to a formatted string [cite: 1486]
            char *jsonString = cJSON_Print(rootArray);
            if (jsonString == NULL)
            {
                printf("Failed to print modified JSON string.\n");
                cJSON_Delete(rootArray);
                exit(1);
            }

            //& Open the file in "w" (write) mode to overwrite it with the updated data
            fp = fopen("college.json", "w");
            if (fp == NULL)
            {
                printf("Error opening file for writing.\n");
            }
            else
            {
                fputs(jsonString, fp); // [cite: 1486]
                fclose(fp);
                printf("Successfully updated people.json with new objects!\n");
            }

            //& Memory Cleanup
            free(jsonString);

            //^ Deleting the root array automatically deletes everything inside it,
            //^ including the newly appended objects[cite: 1590].
            cJSON_Delete(rootArray);

            College();
            break;
        }
            case 2:{
            fp = fopen("college.json", "r");
            if (fp == NULL) {
                printf("Error opening file\n");
                exit(1);
            }
            //& Get the file size to allocate the right amount of memory
            long fileSize;
            char *fileBuffer;
            fseek(fp, 0, SEEK_END);
            fileSize = ftell(fp);
            fseek(fp, 0, SEEK_SET);

            fileBuffer = (char *)malloc(fileSize + 1);
            fread(fileBuffer, 1, fileSize, fp);
            fileBuffer[fileSize] = '\0'; // Null-terminate the string
            fclose(fp);

            //& Parse the JSON string into a cJSON object [cite: 1480]
            cJSON *rootArray = cJSON_Parse(fileBuffer);
            free(fileBuffer); // We don't need the raw string buffer anymore

            if (rootArray == NULL)
            {
                const char *error_ptr = cJSON_GetErrorPtr();
                if (error_ptr != NULL)
                {
                    printf("Error parsing JSON before: %s\n", error_ptr);
                }
                exit(1);
            }

            //& Ensure the root is actually an array
            if (!cJSON_IsArray(rootArray))
            {
                printf("Root is not an array.\n");
                exit(1);
            }

            //& Print the contents of the root array
            cJSON *item = NULL;
            cJSON_ArrayForEach(item, rootArray)
            {
                cJSON *name = cJSON_GetObjectItem(item, "Name");
                cJSON *cutoff = cJSON_GetObjectItem(item, "Cutoff");
                printf("Name: %s, Cutoff: %d\n", name->valuestring, cutoff->valueint);
            }
            //& Memory Cleanup
            cJSON_Delete(rootArray);

            int choice;
            printf("\nWant to Continue?\n");
            printf("Press 1: Yes\n");
            printf("Press 2: No\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            getchar();
            printf("\n");

            if (choice == 1)
            {
                College();
            }else
            {
                printf("Thank You,Bye\n");
                exit(0);
            }
            break;
        }
        case 3:{
            fp = fopen("college.json", "r");
            if (fp == NULL) {
                printf("Error opening file\n");
                exit(1);
            }
            //& Get the file size to allocate the right amount of memory
            long fileSize;
            char *fileBuffer;
            fseek(fp, 0, SEEK_END);
            fileSize = ftell(fp);
            fseek(fp, 0, SEEK_SET);

            fileBuffer = (char *)malloc(fileSize + 1);
            fread(fileBuffer, 1, fileSize, fp);
            fileBuffer[fileSize] = '\0'; // Null-terminate the string
            fclose(fp);

            //& Parse the JSON string into a cJSON object [cite: 1480]
            cJSON *rootArray = cJSON_Parse(fileBuffer);
            free(fileBuffer); // We don't need the raw string buffer anymore

            if (rootArray == NULL)
            {
                const char *error_ptr = cJSON_GetErrorPtr();
                if (error_ptr != NULL)
                {
                    printf("Error parsing JSON before: %s\n", error_ptr);
                }
                exit(1);
            }

            //& Ensure the root is actually an array
            if (!cJSON_IsArray(rootArray))
            {
                printf("Root is not an array.\n");
                exit(1);
            }

            //& Taking Input of College Name to be deleted 
            char collegeName[50];
            printf("Enter the name of the college to be deleted: ");
            scanf("%[^\n]", collegeName);
            getchar();
            
            //& Finding and Deleting the desired object according to provided college name 
            cJSON *item = NULL;
            int flag = -1;
            int count = 0;
            cJSON_ArrayForEach(item, rootArray)
            {
                cJSON *name = cJSON_GetObjectItem(item, "Name");
                if (strcmp(name->valuestring, collegeName) == 0)
                {   
                    flag = 1;
                    cJSON_DeleteItemFromArray(rootArray, count);
                    break;
                }
                count++;
            }

            if (flag == -1)
            {
                printf("College not found.\n");
                exit(1);
            }
            printf("modified JSON string %s:\n", cJSON_Print(rootArray));
            //& Convert the modified cJSON array back to a formatted string [cite: 1486]
            char *jsonString = cJSON_Print(rootArray);
            if (jsonString == NULL)
            {
                printf("Failed to print modified JSON string.\n");
                cJSON_Delete(rootArray);
                exit(1);
            }

            //& Open the file in "w" (write) mode to overwrite it with the updated data
            fp = fopen("college.json", "w");
            if (fp == NULL)
            {
                printf("Error opening file for writing.\n");
            }
            else
            {
                fputs(jsonString, fp); // [cite: 1486]
                fclose(fp);
                printf("Successfully deleted the college\n");
            }

            //& Memory Cleanup
            free(jsonString);

            //^ Deleting the root array automatically deletes everything inside it,
            //^ including the newly appended objects[cite: 1590].
            cJSON_Delete(rootArray);

            College();
            break;

        }
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
}
int main() {

    int choice;
    printf("------Welcome to Parent Portal------\n");
    printf("Press 1: College Management System\n");
    printf("Press 2: Student Counselling System\n");
    printf("Press 3: Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();
    printf("\n");
    switch (choice) {
        case 1:
            College();
            break;
        case 2:
            // Student();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}