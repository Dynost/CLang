#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cJSON.h"

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

    

    

    // switch (ch) {
    //     case 1:
    //         printf("Enter College Name: (Don't Give Space) ");
    //         char nameTemp[50];
    //         scanf("%[^\n]", nameTemp);
    //         //& Creating a new json object
    //         cJSON *root = cJSON_CreateObject();
    //         cJSON_AddStringToObject(root, "Name", nameTemp);
            
    //         //& Convert json object to string
    //         char *jsonString = cJSON_Print(root);

    //         //& write json string to a file
    //         FILE *fp;
    //         fp = fopen("college.json", "a+");
    //         if (fp == NULL) {
    //             printf("Error opening file");
    //             exit(1);
    //         }
    //         fputs(jsonString, fp);
    //         fclose(fp);
    //         cJSON_free(jsonString);
            
    //         //& free the json object and jsob string
    //         cJSON_free(jsonString);
    //         cJSON_Delete(root);

    //         printf("College added successfully.\n\n");
    //         College();
    //         break;
    //     case 2:
    //         printf("\n---Avaiable Colleges:---\n");
            
    //         //& read json string from a file
    //         FILE *fp2;
    //         fp2 = fopen("college.json", "a+");
    //         if (fp2 == NULL) {
    //             printf("Error opening file");
    //             exit(1);
    //         }
    //         char buffer[1024];
    //         int bytesRead = fread(buffer, sizeof(char), sizeof(buffer), fp2);
    //         fclose(fp2);

    //         //& parse json string
    //         cJSON *root = cJSON_Parse(buffer);
    //         if (root == NULL){
    //             const char *error_ptr = cJSON_GetErrorPtr();
    //             if (error_ptr)
    //                 printf("Error before: %s\n", error_ptr);
    //             cJSON_Delete(root);
    //             exit(1);
    //         }

    //         //& Access json object data
    //         cJSON *Name = cJSON_GetObjectItemCaseSensitive(root, "Name");
    //         if (Name == NULL)
    //         {
    //             printf("Name field not found in JSON object\n");
    //             cJSON_Delete(root);
    //             exit(1);
    //         }
    //         printf("Name: %s\n", Name->valuestring);
    //         printf("\n");

    //         //& free the json object and jsob string
    //         cJSON_free(jsonString);
    //         cJSON_Delete(root);

    //         College();
    //         break;
    //     case 3:
    //         exit(0);
    //         break;
    //     default:
    //         printf("Invalid choice\n");
    //         break;
    // }

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