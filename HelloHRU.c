#include <stdio.h>
#include <math.h>
int main()
{

    // int vonum;       /* declare vonum */
    // vonum = 60;      /* assign or initialize value to vonum */
    // int vonum2 = 70; /* declare vonum2 and assign/initialize value */

    // ?Camel case example
    // A: camelCaseExample (Starts with lowercase letter, and each subsequent word starts with an uppercase letter)
    // ?Q: Snake case example
    // A: snake_case_example (All letters are lowercase, and words are separated by underscores)
    // ?Q: Pascal case example
    // A: PascalCaseExample (Each word starts with an uppercase letter, including the first
    
    //*  Format specifiers:
    // printf("I want to print %d and also %d in the same line.\n", vonum, vonum2);

    // double pi;
    // pi = 3.14159; 
    // printf("Value of pi: %.2lf\n", pi); // Print pi with 2 decimal places
    // printf("3 digits of pi aree: %.3lf\n", pi); // Print pi with 3 decimal places
    // sizeof(double); // This will return the size of the double data type in bytes
    //printf("Size of double: %zu bytes\n", sizeof(double)); // Print the size of double data type in bytes
    //!Note: The %zu format specifier is used to print the size_t type, which is the type returned by the sizeof operator. It ensures that the output is correctly formatted regardless of the platform or architecture.
    
    // *All escape sequences:
    // printf("This is a new line.\n");
    // printf("This is a tab:\tHere is the tabbed text.\n");
    // printf("This is a backslash: \\\n");
    // printf("This is a double quote: \"Hello, World!\"\n");
    // printf("This is a single quote: \'Hello, World!\'\n");
    // printf("This is a carriage return: Hello, World!\rCarriage Return\n");
    // printf("This is a vertical tab:\vHere is the text after vertical tab.\n");
    // printf("This is a form feed:\fHere is the text after form feed.\n");
    // printf("This is a backspace: Hello, World!\b\b\b\b\b\b\b\b\b\b\bBackspace\n");  
    // printf("This is a alert sound: \a\n"); // This will produce a beep sound on some systems
    // printf("This is a question mark: \?\n");
    // printf("This is a octal value: \101\n"); // Octal for 'A'
    // printf("This is a hexadecimal value: \x41\n"); // Hexadecimal for '
    // printf("This is a Unicode character: \u03A9\n"); // Unicode for 'Ω'
    
    // *For Percentage use double %%
    // printf("This is how you print a percentage sign: 100%%\n");
    
    // ?For forced no.of digits after decimal point, use .nf where n is the number of digits
    // int num = 42;
    // printf("%4d\n", num); // Print num with a minimum width of 4 characters
    // printf("%-4d\n", num); // Print num left-aligned with a minimum width of 4 characters
    // printf("%04d\n", num); // Print num with a minimum width of 4 characters, padded with zeros
    // printf("%+4d\n", num); // Print num with a minimum width of 4 characters, including a sign
    // printf("%-05d\n", num); // Print num left-aligned with a minimum width of 5 characters, padded with zeros
    
    // *int,char,float in one line
    // int num = 42;
    // char letter = 'A';
    // float pi = 3.14159;
    // printf("Integer: %d, Character: %c, Float: %.2f\n", num, letter, pi); // Print all three variables in one line
    
    /* 
    ?Character after integer problem
    char ch;
    int num;

    printf("Enter an integer:");
    scanf("%d", &num); // Read an integer from user input and store it in num
    printf("Enter a character:");
    scanf(" %c", &ch); // Read a character from user input and store it in ch (note the space before %c to consume any leftover whitespace)
    
    printf("You entered character: %c\n", ch);
    printf("You entered integer: %d\n", num);

    !OR use:
    getchar(); // This will consume the leftover newline character from the previous input
    scanf("%c", &ch); // Now you can safely read the character input without it being skipped
    */

    // * Important Operators:
    // Int / Int = Int (e.g., 5 / 2 = 2)
    // Float / Float = Float (e.g., 5.0 / 2.0 = 2.5)
    // Int / Float = Float (e.g., 5 / 2.0 = 2.5)
    // Float / Int = Float (e.g., 5.0 / 2 = 2.5)
    // * Modulo operator (%)
    // can only be used with integers. It gives the remainder of the division of two integers. For example:
    // int a = 10;
    // int b = 3;
    // int result = a % b; // result will be 1, because 10 divided by 3 is 3 with a remainder of 1
    //* Sizeof operator:
    // The sizeof operator is used to determine the size (in bytes) of a data type or a variable. For example:
    // int num;
    // printf("Size of int: %zu bytes\n", sizeof(int)); // Size of int data type
    // printf("Size of num variable: %zu bytes\n", sizeof(num)); // Size of num variable (which is an int)
    //!Note: The %zu format specifier is used to print the size_t type, which is the type returned by the sizeof operator. It ensures that the output is correctly formatted regardless of the platform or architecture.

    //* Increment and Decrement Operators:
    // int x = 5;
    // printf("Post-increment: %d\n", x++); // Prints 5, then x becomes 6
    // printf("Pre-increment: %d\n", ++x);  // x becomes 7, then prints 7

    // *Logical Operators:
    // int a = 5, b = 10;
    // printf("Logical AND (&&): %d\n", (a > 0 && b > 0)); // True (1) because both conditions are true
    // printf("Logical OR (||): %d\n", (a > 0 || b < 0));  // True (1) because at least one condition is true
    // printf("Logical NOT (!): %d\n", !(a > 0)); // False (0) because a > 0 is true, so !true is false

    // TODO: Test more on bitwise operators.
    //? Q: Explain bitwise operators.
    // A: Bitwise operators are used to perform operations on individual bits of integer data types. They include:
    // - Bitwise AND (&): Performs a logical AND operation on each pair of corresponding bits. The result is 1 only if both bits are 1.
    // - Bitwise OR (|): Performs a logical OR operation on each pair of corresponding bits. The result is 1 if at least one of the bits is 1.
    // - Bitwise XOR (^): Performs a logical exclusive OR operation on each pair of corresponding bits. The result is 1 only if the bits are different.
    // - Bitwise NOT (~): Performs a logical NOT operation on each bit. The result is 1 for each bit that is 0, and 0 for each bit that is 1.
    // - Left Shift (<<): Shifts the bits of the first operand to the left by the number of positions specified by the second operand. The vacated bits on the right are filled with zeros.
    // - Right Shift (>>): Shifts the bits of the first operand to the right by the number of positions specified by the second operand. The vacated bits on the left are filled with zeros for unsigned types, and with the sign bit for signed types.
    // Example of bitwise operators:
    // int a = 5;  // In binary: 0000 0101
    // int b = 3;  // In binary: 0000 0011
    // printf("Bitwise AND: %d\n", a & b); // Output: 1 (0000 0001)
    // printf("Bitwise OR: %d\n", a | b);  // Output: 7 (0000 0111)
    // printf("Bitwise XOR: %d\n", a ^ b); // Output: 6 (0000 0110)
    // printf("Bitwise NOT: %d\n", ~a);    // Output: -6 (1111 1010 in two's complement)

    //? Q: What is type casting?
    // A: Type casting is the process of converting a variable from one data type to another. In C, you can perform type casting using the syntax (data_type) variable. For example:
    // int num = 5;
    // float result = (float)num / 2; // This will convert num to a float before performing the division, resulting in 2.5 instead of 2.

    round(3.14159); // This will round the value of pi to the nearest integer, which is 3
    printf("Rounded value of pi: %.2f\n", round(3.14159)); // Print the rounded value of pi with no decimal places
    return 0; 
}
