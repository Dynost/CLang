#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    
    //^1. Array Traversing when used malloc (arr + i)
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

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
    
    
    
    
    
    return 0;
}