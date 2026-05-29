#include <stdio.h>
int main() {
    int a, b, temp;

    // Input values for a and b
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    //  Swap the values using a temporary variable
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b

    // Swap without using a temporary variable (optional)
    a =  a + b;
    b =  a - b; // Now b is original a
    a =  a - b; // Now a is original b

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}