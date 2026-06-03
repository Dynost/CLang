#include <stdio.h>
#include <math.h>

int main() {

    // ?Difference between array and linked list:
    // An array is a collection of elements stored in contiguous memory locations, which allows for fast access to any element using its index. However, arrays have a fixed size, meaning that you need to specify the number of elements it can hold at the time of declaration, and it cannot be resized dynamically.
    // A linked list, on the other hand, is a collection of nodes where each node contains data and a pointer to the next node in the list. Linked lists can grow and shrink dynamically as needed, but they do not allow for direct access to elements like arrays do, which can make them less efficient for certain operations.
    // Array is Contiguous memory allocation, while Linked List is Non-contiguous memory allocation.
    // Linear data structure is an array, while Non-linear data structure is a linked list.
    //* Arrays:
    // ^ Ways of Declaration and initialization of an array:
    // int numbers[5]; // Declaration of an array of integers with size 5
    // int numbers[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array of integers with size 5
    // int numbers[] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array of integers with size determined by the number of elements provided
    // int numbers[5] = {0}; // Declaration and initialization of an array of integers with size 5, all elements initialized to 0
    // int numbers[5] = {1, 2}; // Declaration and initialization of an array of integers with size 5, first two elements initialized to 1 and 2, and the rest initialized to 0

    // ^ Ways to print an array:
    // int numbers[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", numbers[i]); // Print each element of the array followed by a space
    // }

    //? Find Array length using sizeof 
    // sizeof(numbers) will give the total size of the array in bytes, and sizeof(numbers[0]) will give the size of a single element in bytes. By dividing the total size of the array by the size of a single element, we can calculate the number of elements in the array.
    // int numbers[5] = {1, 2, 3, 4, 5};
    // int length = sizeof(numbers) / sizeof(numbers[0]);


    // TODO: Programs on arrays:

    // & Array Statistical Tool
    // int n;
    // printf("How many numbers will you work on?\n");
    // scanf("%d",&n);
    // float arr[n];
    // printf("Enter the numbers:\n");

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%f5",&arr[i]);
    // }
    
    // $ Sum,avg,min and max:

    // double sum = 0, avg,minimum,maximum;
    // minimum = arr[0];
    // maximum = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    //     minimum = fmin(minimum,arr[i]);
    //     maximum = fmax(maximum,arr[i]);
    // }
    // avg = sum/n;

    // printf("Sum is %lf \n Avg is %lf \n maximum is %lf \n minimum is %lf\n", sum,avg,maximum,minimum);

    // & Array Left Rotation by 1:
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int temp = arr[0]; // Store the first element in a temporary variable
    // for (int i = 0; i < n - 1; i++) {
    //     arr[i] = arr[i + 1]; // Shift each element one position to the left
    // }
    // arr[n - 1] = temp; // Place the first element at the last position

    // & Linear Search:
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int target = 3;
    // int index = -1; // Initialize index to -1 to indicate target not found
    // int found = 0; // Flag to indicate if the target is found
    // for (int i = 0; i < n; i++) {
    //     if (arr[i] == target) {
    //         found = 1; // Set the flag to true if the target is found
    //         index = i; // Update the index to the position of the found target
    //         break; // Exit the loop since we found the target
    //     }
    // }
    // if (found) {
    //     printf("Target %d found in the array at index %d.\n", target, index);
    // } else {
    //     printf("Target %d not found in the array.\n", target);
    // }

    //* Multi-Dimensional Arrays:

        // ^ 2D Array Declaration and Initialization:
        // int matrix[3][3] = {
        //     {1, 2, 3},
        //     {4, 5, 6},
        //     {7, 8, 9}
        // };
        //!or
        // int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // The elements will be filled in row-major order
        // int matrix[3][3] = {0}; // All elements initialized to 0
        // ^ 2D Array Access:
        // int value = matrix[1][2]; // Access the element in the second row and third column (value will be 6)
        // ^ 2D Array Traversal:
        // for (int i = 0; i < 3; i++) {
        //     for (int j = 0; j < 3; j++) {
        //         printf("%d ", matrix[i][j]); // Print each element of the 2D array followed by a space
        //     }
        //     printf("\n"); // Print a new line after each row
        // }


    return 0;
}