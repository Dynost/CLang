#include <stdio.h>
#include <math.h>

int sum(int a,int b); //! Declaration of Function sum
// * Use of void return type in function declaration
void printMessage(); 
// ? Q: What is the purpose of void return type in function declaration?
// A: The void return type in a function declaration indicates that the function does not return any value. It is used when the function performs an action but does not need to provide any information back to the caller. For example, a function that prints a message to the console might use void as its return type because it does not need to return any data.

int main()
{
    //$ address-of operator (&)

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

    // ? For String: (using char array)
    // char name[] = "Hello, World!"; 
    // printf("Name: %s\n", name); // Print the string stored in name variable
    // !%s format specifier is used to print strings in C. It expects a null-terminated character array (string) as an argument and prints the characters until it encounters the null terminator '\0'.  

    // sizeof(double); // This will return the size of the double data type in bytes
    //printf("Size of double: %zu bytes\n", sizeof(double)); // Print the size of double data type in bytes
    //!Note: The %zu or %lu format specifier is used to print the size_t type, which is the type returned by the sizeof operator. It ensures that the output is correctly formatted regardless of the platform or architecture.
    
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
    // Type casting is also called type conversion. It can be implicit (automatic) or explicit (manual). Implicit type casting occurs when the compiler automatically converts one data type to another during an operation, while explicit type casting is done by the programmer to force a conversion.
    // int num = 5;
    // float result = (float)num / 2; // This will convert num to a float before performing the division, resulting in 2.5 instead of 2.

    // * Conditonal (Ternary) Operators:
    // int a = 10, b = 20;
    // int max = (a > b) ? a : b; // This will assign the value of a to max if a is greater than b, otherwise it will assign the value of b to max
    // printf("The maximum value is: %d\n", max);
    // *if-else statements:
    // int marks = 70;
    // if (marks >= 70) {
    //     printf("Grade: A\n");
    // } else if (marks >= 60) {
    //     printf("Grade: B\n");
    // } else if (marks >= 50) {
    //     printf("Grade: C\n");
    // } else {
    //     printf("Grade: F\n");
    // }

    //* Switch statements:
    // int day = 3;
    // switch (day) {
    //     case 1:
    //         printf("Monday\n");
    //         break;
    //     case 2:
    //         printf("Tuesday\n");
    //         break;
    //     case 3:
    //         printf("Wednesday\n");
    //         break;
    //     default:
    //         printf("Invalid day\n");
    // }

    //? When can we omit curly braces in if-else statements?
    // A: Curly braces can be omitted in if-else statements when there is only a single statement to execute within the block. For example:

    // * Comma Operator:
    // int a = 5, b = 10;
    // int result = (a++, b++); // The comma operator evaluates both expressions but returns the value of the second expression, so result will be 10

    // Loops:
    // * For loop:
    // Syntax: for (initialization; condition; increment/decrement) {
    //     Code to be executed in each iteration
    // }
    // Type 1:
    // for (int i = 0; i < 5; i++) {
    //     printf("Iteration: %d\n", i);
    // }
    //  Type 2:  
    // int j = 0;
    // for (; j < 5; j++) {
    //     printf("Iteration: %d\n", j);
    // }
    // Type 3:
    // int k = 0;
    // for (;;) {
    //     if (k >= 5) {
    //         break; // Exit the loop when k is 5 or greater
    //     }
    //     printf("Iteration: %d\n", k);
    //     k++;
    // }
    // Type 4: (Using multiple variables in for loop)
    // int x, y;
    // for (x = 0, y = 10; x < 5 && y > 5; x++, y--) {
    //     printf("x: %d, y: %d\n", x, y);
    // }
    //! Type 5: (Infinite loop)
    // for (;;) {
    //     printf("This is an infinite loop.\n");
    // }
    // Type 6: (Using for loop without initialization and increment/decrement)
    // int m = 0;
    // for (; m < 5;) {
    //     printf("Iteration: %d\n", m);
    //     m++;
    // }
    // !Type 7: User controlled loop:
    // int n;
    // if (scanf("%d", &n) != 1 || n < 0) {
    //     printf("Invalid input\n");
    //     return 1;
    // }

    // for (int i = 0; i < n; ++i) {
    //     printf("Iteration %d\n", i); // runs n times: i = 0 .. n-1
    // }

    // *continue statement:
    // for (int i = 0; i < 10; i++) {
    //     if (i % 2 == 0) {
    //         continue; // Skip the rest of the loop body for even numbers
    //     }
    //     else
    //     {
    //         printf("Odd number: %d\n", i); // This will print only odd numbers from 0 to 9
    //     }
    // }

    // * While loop:
    // int count = 0;
    // while (count < 5) {
    //     printf("Count: %d\n", count);
    //     count++;
    // }

    //? Q: When to use for loop and when to use while loop?
    // A: Use a for loop when the number of iterations is known beforehand or when you want to initialize and update a loop variable in a single line. 
    // Use a while loop when the number of iterations is not known and you want to continue looping until a certain condition is met.

    //! 1 always means true and 0 always means false in C. Any non-zero value is considered true, but it is common practice to use 1 to represent true for clarity.

    // ?Important concept:
    // To remove last digit of a number: num = num / 10; (e.g., if num is 123, after this operation it will become 12)
    // To get last digit of a number: last_digit = num % 10; (e.g., if num is 123, last_digit will be 3)

    // * Do-While loop:
    // Syntax: do {
    //     Code to be executed at least once
    // } while (condition);
    // // Example:
    // int i = 0;
    // do {
    //     printf("Iteration: %d\n", i);
    //     i++;
    // } while (i < 5);

    //? Q: When to use do-while loop?
    // A: Use a do-while loop when you want to ensure that the code block is executed at least once, regardless of the condition. This is because the condition is evaluated after the code block is executed in a do-while loop, unlike in a while loop where the condition is evaluated before the code block is executed.
    
    //* Nested Loops:
    // int n=5;
    // //outer - no. of rows
    // for(int i=1; i <= 5; i++){
    //     //inner - no. of columns
    //     for(int j=1; j <= n; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //& Function calls:
    // int s = sum(3,4);
    // printf("%d", s);
    //printMessage();

    int n = 5;
    printf("size: %zu bytes\n", sizeof(n)); // Print the size of n variable in bytes
    return 0; // Return 0 indicates that the program executed successfully. It is a common convention in C to return 0 from the main function to indicate that the program has completed without errors.
}
//* Function definition of sum or Function implementation of sum
int sum (int a,int b){
    return a+b;
}
void printMessage(){
    printf("Hello World!\n");
}

//? Pass by value vs Pass by reference:
// A: In C, all function arguments are passed by value, which means that a copy of the argument is made and passed to the function. This means that any changes made to the parameter inside the function do not affect the original argument outside the function. However, you can achieve pass by reference behavior in C by passing a pointer to the variable instead of the variable itself. This way, the function can modify the value at the memory address pointed to by the pointer, effectively allowing you to change the original variable outside the function.
