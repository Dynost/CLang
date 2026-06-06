#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct User {
    char name[30];
    int Rnum;
    int marks;
}Student;

void DisplayTopper(Student array[]);

void DisplayTopper(Student array[]){
    int tempmarks = -1;
    int flag = -1;
    for(int i = 0; i < 3; i++){
        if (array[i].marks > tempmarks){
            tempmarks = array[i].marks;
            flag = i;
        }
    }

    char newname[100];
    strcpy(newname, "TopperX");
    strcat(newname, array[flag].name);

    printf("Topper is %s, with marks %d.\n", array[flag].name, array[flag].marks);
    printf("His new name is %s\n", newname);
}

int main() {

    Student array[3];
    //& Input:
    char tempstr[30];
    int tempRnum;
    int tempmarks;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for user %d:\n",(i+1));
        printf("Name: ");
        scanf("%29[^\n]", tempstr);
        getchar();
        printf("\nRoll Number of %s:",tempstr);
        scanf("%d",&tempRnum);
        getchar();
        printf("\nMarks of %s:", tempstr);
        scanf("%d",&tempmarks);
        getchar();
        printf("\n");

        strcpy(array[i].name, tempstr);
        array[i].Rnum = tempRnum;
        array[i].marks = tempmarks;
    }

    //& Output:
    printf("All student details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n",array[i].name);
        printf("Roll number: %d", array[i].Rnum);
        printf("\nMarks: %d", array[i].marks);
        printf("\n\n");
    }

    DisplayTopper(array);
}