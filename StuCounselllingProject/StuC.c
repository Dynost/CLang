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

            // 1. Read the existing JSON file
            fp = fopen("college.json", "r");
            if (fp == NULL)
            {
                printf("Error: Could not open people.json for reading.\n");
                exit(1);
            }

            // Get the file size to allocate the right amount of memory
            long fileSize;
            char *fileBuffer;
            fseek(fp, 0, SEEK_END);
            fileSize = ftell(fp);
            fseek(fp, 0, SEEK_SET);

            fileBuffer = (char *)malloc(fileSize + 1);
            fread(fileBuffer, 1, fileSize, fp);
            fileBuffer[fileSize] = '\0'; // Null-terminate the string
            fclose(fp);                // Close the file for now [cite: 1479]

            // 2. Parse the JSON string into a cJSON object [cite: 1480]
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

            // Ensure the root is actually an array before trying to append to it
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

            // 2. Take input from user
            printf("Enter College Name: ");
            char nameTemp[50];
            scanf("%[^\n]", nameTemp);
            getchar();
            printf("Enter Cutoff: ");
            int cutoff;
            scanf("%d", &cutoff);
            getchar();

            // 3. Create a new object to add
            cJSON *newCol = cJSON_CreateObject();
            cJSON_AddStringToObject(newCol, "Name", nameTemp);
            cJSON_AddNumberToObject(newCol, "Cutoff", cutoff);

            // 4. Append the new object to the root array
            cJSON_AddItemToArray(rootArray, newCol);

            // 5. Convert the modified cJSON array back to a formatted string [cite: 1486]
            char *jsonString = cJSON_Print(rootArray);
            if (jsonString == NULL)
            {
                printf("Failed to print modified JSON string.\n");
                cJSON_Delete(rootArray);
                exit(1);
            }

            // Open the file in "w" (write) mode to overwrite it with the updated data
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

            // 6. Memory Cleanup
            free(jsonString);

            // Deleting the root array automatically deletes everything inside it,
            // including the newly appended objects[cite: 1590].
            cJSON_Delete(rootArray);

            College();
            break;
        }
            case 2:
            break;
        case 3:
            break;
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