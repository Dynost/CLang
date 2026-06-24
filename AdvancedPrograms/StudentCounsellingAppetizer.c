#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student{
    char name[50];
    float percentile;
}St;

typedef struct College{
    char Clname[50];
    float cutoff;
}Cl;

void College(){
    FILE *fp;
    fp = fopen("college.txt", "a");
    if (fp == NULL) {
    printf("Error opening file");
    return 1;
    }

    // Variable Initialization
    Cl cl;
    char nameTemp[50];            
    char line[100];
    int Clname, Clcutoff;
    int choice;
    printf("\nMenu:\n");
    printf("1. Add College\n");
    printf("2. Display Avaiable Colleges\n");
    printf("3. Delete Colleges\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();
    printf("\n");
    switch (choice) {
        case 1:
            printf("Enter College Name:");
            scanf("%[^\n]", nameTemp);
            strcpy(cl.Clname, nameTemp);
            getchar();
            printf("Enter Cutoff:");
            scanf("%f", &cl.cutoff);
            getchar();

            fprintf(fp, "%s %f\n", cl.Clname, cl.cutoff);
            break;
        case 2:
            printf("\n---College List---\n");
            while (fscanf(fp, "%s %f", Clname, &Clcutoff) != EOF) {
                printf("College Name: %s\n", Clname);
                printf("Cutoff: %f\n", Clcutoff);
                printf("\n");
            }
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
    College();
}
void Student(){
    FILE *fp2;
    fp2 = fopen("student.txt", "a");
}


int main() {
    int choice;
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


}
