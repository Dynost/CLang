#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    FILE *fp;
    FILE *fp2;

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

    switch (choice) {
        case 1:
            fp = fopen("college.txt", "r");
            if (fp == NULL) {
            perror("Error opening file");
            return;
            }
            break;
        case 2:
            fp2 = fopen("student.txt", "r");
            if (fp2 == NULL) {
            perror("Error opening file");
            return;
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }


}