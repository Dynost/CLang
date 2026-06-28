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
            //& 1. Create the root array
            cJSON *rootArray = cJSON_CreateArray();
            if (rootArray == NULL)
            {
                printf("Failed to create root array.\n");
                return 1;
            }
            
            //& 2 & 3. Create and populate the first object
            cJSON *college = cJSON_CreateObject();
            cJSON_AddStringToObject(college, "name", "Kolhapuri");

            
            
            
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