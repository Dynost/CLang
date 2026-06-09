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

}

void Student(){
    
}


int main() {
    FILE *fp;
    FILE *fp2;

    fp = fopen("college.txt", "w");
    fp2 = fopen("student.txt", "w");
    if (fp == NULL) {
    perror("Error opening file");
    return;
    }

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
