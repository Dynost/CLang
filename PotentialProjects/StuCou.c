#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct StudentSt{
    char name[50];
    float marks;
}St;

typedef struct CollegeSt {
    char clName[50];
    float clCutoff;
}Cl;

void College();
void Student();

void College(){
    FILE *fp;
    fp = fopen("college.txt", "a+");
    if (fp == NULL)
    {
        printf("Error opening file");
        exit(1);
    }
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

    Cl Col;
    switch (ch) {
        case 1:{
            char nameTemp[50];
            printf("Enter College Name: (Don't Give Space) ");
            scanf("%[^\n]", nameTemp);
            strcpy(Col.clName, nameTemp);
            getchar();
            printf("Enter Cutoff: ");
            scanf("%f", &Col.clCutoff);
            getchar();
            fprintf(fp, "%s %f\n", Col.clName, Col.clCutoff);
            fclose(fp);
            printf("College added successfully.\n\n");
            break;
        }
        case 2:{  
            printf("--- Avaiable Colleges: ---\n");
            while (fscanf(fp, "%s %f", Col.clName, &Col.clCutoff) != EOF) {
                printf("Name: %s\nCutoff: %.2f\n", Col.clName, Col.clCutoff);
            }
            fclose(fp);
            int cc;
            printf("\n\nContinue?\n1. Yes\n2. No\n(Enter 1 or 2)\nEnter your choice: ");
            scanf("%d", &cc);
            getchar();
            printf("\n");
            switch (cc) {
                case 1:
                    College();
                    break;
                case 2:
                    exit(0);
                    break;
                default:
                    College();
                    break;
            }
            break;
        }
        case 3:{
            break;
        }
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;

    }
    College();
}

void Student(){
    exit(0);
}

int main()
{
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
            Student();
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