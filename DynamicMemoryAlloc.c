#include <stdio.h>
#include <stdlib.h>
int main() {

    //* Dynamic Array

    //& MALLOC
    int *ptr = (int *)malloc(5 * sizeof(int)); //^ The values in the array are uninitialized (contains garbage values)

    //$ Check if Memory is allocated correctly
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    //? Why * is used along with (int *) in type casting
    // A: The `malloc` function returns a `void*` pointer, which is a generic pointer type.
    // A:  To assign it to `int *arr`, we need to explicitly cast the `void*` to `int*`.
    //  A:  The `(int *)` part performs this type casting.
    // A:   This tells the compiler that we intend to treat the memory returned by `malloc`
    //  A:  as a block of integers. Without the cast, some compilers might issue a warning,
    //  A:  though it often works implicitly in C. It's good practice to include it for clarity
    // A:   and to avoid potential warnings or errors in stricter compilers.

    //& CALLOC
    int *ptr2 = (int *)calloc(5, sizeof(int)); //^ The values in the array are preinitialised with 0 or 0.0 

    
    //$ Check if Memory is allocated correctly
    if (ptr2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    //& REALLOCATE
    // Let's resize ptr2 to hold 10 integers instead of 5
    // Always use a temporary pointer to prevent memory leaks if realloc fails
    int *temp = (int *)realloc(ptr2, 10 * sizeof(int));
    if (temp != NULL) {
        ptr2 = temp; // Reallocation was successful, safe to update original pointer
    } else {
        printf("Memory reallocation failed.\n");
        // ptr2 is still valid here and still needs to be freed!
    }

    //& FREE
    // It's a best practice to free allocated memory to prevent memory leaks
    free(ptr);
    free(ptr2);
}