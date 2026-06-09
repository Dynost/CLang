#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[50];
    int rollno;
    float marks;
}St;

int main() {

    FILE *fp;
    int choice;
    printf("------Student Management System------\n");
    // Main program loop for the menu-driven system
    do
    {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        St St; // Temporary structure to hold student data
        switch (choice)
        {
        case 1:{
            // Append mode to add new student records to the end of the file
            fp = fopen("students.txt", "a");
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                return 1;
            }

            char temp[50];
            printf("\n---Enter details of Students:---\n");
            printf("Name: ");
            scanf("%49[^\n]", temp); // 49 out of 50 skips the \n character at last
            getchar(); // Consume the newline character left by scanf for the name (For extra protection)
            strcpy(St.name, temp);
            printf("\nRoll No: ");
            scanf("%d", &St.rollno);
            getchar();
            printf("\nMarks: ");
            scanf("%f", &St.marks);
            getchar();

            fprintf(fp, "%s %d %.2f\n", St.name, St.rollno, St.marks);
            fclose(fp);
            printf("Student added successfully.\n");
            break;
        }
        case 2:{
            // Read mode to display all records from the file
            fp = fopen("students.txt", "r");
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                return 1;
            }
            printf("\n---Student List---\n");
            // Read formatted data until the end of the file
            while (fscanf(fp, "%s %d %f", St.name, &St.rollno, &St.marks) != EOF) { //$ Display all Student Detail until End of File is reached.
                printf("Name: %s, Roll No: %d, Marks: %.2f\n", St.name, St.rollno, St.marks);
            }
            fclose(fp);

            break;
        }
        case 3:{
            // Search for a specific student by roll number
            fp = fopen("students.txt", "r");
            int search,found = 0;
            if (fp == NULL)
            {
                printf("Error opening file.\n");
                return 1;
            }
            printf("Enter Roll number to search: ");
            scanf("%d", &search);
            getchar();
            
            while (fscanf(fp, "%s %d %f", St.name, &St.rollno, &St.marks) != EOF){
                if (St.rollno == search){
                    printf("Name: %s, Roll No: %d, Marks: %.2f\n", St.name, St.rollno, St.marks);
                    found = 1;
                }
            }
            if (found == 0){
                printf("Student not found.\n");
            }
            fclose(fp);
            break;
        }
        case 4:
            // Update student record
            printf("Not Available Yet\n");
            break;
        case 5:
            printf("Not Available Yet\n");
            break;
        case 6:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6); // Continue until user chooses to exit
    
    
}