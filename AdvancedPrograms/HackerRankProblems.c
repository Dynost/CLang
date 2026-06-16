#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	//& #1 HackerRank Problem  
    //? Q: You are given a string S. Your task is to print the contents of the string S on a single line.
    // char s[100];
    // scanf("%[^\n]%*c", &s);
    // printf("Hello, World! \n %s", s);
    // /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    // return 0;

    //& #2 HackerRank Problem  
    //? Q:You have to print the character,ch , in the first line. Then print s in next line. In the last line print the sentence,sen.
    // char ch;
    // char s[50];
    // char sen[100];
    // scanf(" %c",&ch);
    // getchar();
    // scanf("%s",s);
    // getchar();
    // scanf("%[^\n]", sen);
    // getchar();
    // printf("%c\n%s\n%s", ch, s, sen);
    // return 0;

    //& #3 HackerRank Problem  
    //? Q: Generate later after seeing the code below
    // int n1,n2;
    // float f1,f2;
    // scanf("%d %d",&n1,&n2);
    // scanf("%f %f",&f1,&f2);
    // printf("%d %d",n1+n2,n1-n2);
    // printf("%.1f %.1f",f1+f2,f1-f2);
    // return 0;

    //! Rest solved in Hacker Rank platform itself

    //& Test Drive:
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    for(i = 0; i < num; i++){
        printf("%d ", *(arr + i));
    }
    return 0;
}
