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

    //& #4 HackerRank Problem (Medium)
    // int num, *arr, i;
    // scanf("%d", &num);
    // arr = (int*) malloc(num * sizeof(int));
    // for(i = 0; i < num; i++) {
    //     scanf("%d", arr + i);
    // }
    // /* Write the logic to reverse the array. */
    // for(i = 0; i < num; i++){
    //     printf("%d ", arr[num - i - 1]);
    // }
    // return 0;

    //& #5 HackerRank Problem (Medium)
    //? Pattern: 
    /*Sample Input 0
    2
    Sample Output 0

    2 2 2
    2 1 2
    2 2 2
    Sample Input 1

    5
    Sample Output 1

    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5
    */

    // int n;
    // scanf("%d", &n);

    // int size = n*2-1;
    // int range  = n*2-1;
    // int i,j,k,l;
    // int t;
    // for (i = 1;i<=n*2/2;i++){

    //     for (k = n; k>n-i+1;k--){
    //         printf("%d ",k);
    //     }
    //     for (j = 1;j<=range;j++){
    //         printf("%d ",n-i+1);
    //     }
    //     for (l = n - i + 2;l <= n;l++){
    //         printf("%d ",l);
    //     }
    //     printf("\n");
    //     range = range - 2;
    // }
    // t = n - i + 3;
    // range = range + 4;
    // for (i = n*2/2-1;i>=1;i--){
    //     for (k = n; k>n-i+1;k--){
    //         printf("%d ",k);
    //     }
    //     for (j = 1;j<=range;j++){
    //         printf("%d ",n-i+1);
    //     }
    //     for (l = n - i + 2;l <= n;l++){
    //         printf("%d ",l);
    //     }
    //     printf("\n");
    //     range = range + 2;
    // }


    // // printf("%d %d", t , range);

    // return 0;

    //& #6 Hacker Rank (Medium)
    // char *s;
    // s = malloc(1024 * sizeof(char));
    // scanf("%[^\n]", s);
    // s = realloc(s, strlen(s) + 1);
    // //Write your logic to print the tokens of the sentence here.
    // char *token = strtok(s, " ");
    // while (token != NULL)
    // {
    //     printf("%s\n", token);
    //     token = strtok(NULL, " ");
    // }

    //& #7 Hacker Rank (Medium)
    //? Digit Frequency

    // char *s;
    // s = malloc(1024 * sizeof(char));
    // scanf("%[^\n]", s);
    // s = realloc(s, strlen(s) + 1);
    // int arr[10] = {0};
    
    // int i;
    // for (i = 0; s[i] != '\0'; i++)
    // {
    //     if (s[i] >= '0' && s[i] <= '9')
    //         arr[s[i] - '0']++; // Use: s[i] - '0' to get the correct digit offset bcoz character array stores value in ASCII. 
    //         //$ Example Explanation:The array arr is being used as a frequency table, where each position stores how many times a particular digit has appeared. For example, if s[i] is '5', then s[i] - '0' becomes 5, and arr[5]++ increases the count of digit 5 by one.
    // }
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    return 0;
}
