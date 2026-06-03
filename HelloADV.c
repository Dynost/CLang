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

    // TODO: Programs on arrays:

    // & Array Statistical Tool
    int n;
    printf("How many numbers will you work on?\n");
    scanf("%d",&n);
    float arr[n];
    printf("Enter the numbers:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f5",&arr[i]);
    }
    
    // $ Sum , avg,min and max:
    double sum = 0, avg,minimum,maximum;
    minimum = arr[0];
    maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        minimum = fmin(minimum,arr[i]);
        maximum = fmax(maximum,arr[i]);
    }
    avg = sum/n;
    
    printf("Sum is %lf \n Avg is %lf \n maximum is %lf \n minimum is %lf\n", sum,avg,maximum,minimum);
    return 0;
}