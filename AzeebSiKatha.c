#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    
    //^1. Array Traversing when used malloc (arr + i)
    // int num, *arr, i;
    // scanf("%d", &num);
    // arr = (int*) malloc(num * sizeof(int));
    // for(i = 0; i < num; i++) {
    //     scanf("%d", arr + i);
    // }
    // /* Write the logic to reverse the array. */

    // for(i = 0; i < num; i++)
    //     printf("%d ", *(arr + i));

    //A: Explanation:
    /*
    *The Expression: *(arr + i)
    *When you declare an array like int arr[10], the variable arr is actually a pointer to the first element. In C, arr + i performs pointer arithmetic by:
    *Starting at the memory address stored in arr (the address of the first element)
    *Adding i "steps" forward, where each step is the size of one int (typically 4 bytes on most systems)
    *The result *(arr + i) dereferences that address, giving you the value at that location
    */
    //$ Equivalent Forms
    //This is functionally identical to the more common array notation: arr[i].
    // Both access the element at index i. 
    //The compiler treats them the same way internally—array indexing is just syntactic sugar over pointer arithmetic.
    
    //^ Using Strtok to split a string:
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
    
    //A: Explanation:
    /*The while (token != NULL) loop continues as long as strtok finds another token. 
    Inside the loop, printf("%s\n", token); prints the current token on its own line. After that, strtok(NULL, " ") is called to get the next token from the same string. 
    Passing NULL tells strtok to continue from where it left off instead of starting over.

    A key detail is that strtok modifies the original string by replacing delimiter characters with '\0'. 
    Because of that, s must be a writable character array, not a string literal. 
    Another gotcha is that strtok is not thread-safe and keeps internal state, so it should be used carefully in more complex programs.
    */

    //$ Equivalent Forms:
    // char *s;
    // s = malloc(1024 * sizeof(char));
    // scanf("%[^\n]", s);
    // s = realloc(s, strlen(s) + 1);
    // int i;
    // for(i=0;s[i]!=NULL;i++)
    // {
    //   if(s[i]==' ')
    //   {
    //     printf("\n");
    //     continue;
    //   }
    //   printf("%c",s[i]);
    // }
    
    
    return 0;
}