#include <stdio.h>
#include <math.h>
#include <string.h>

void valueChange(int *ptr) {
    *ptr = 100; //$ Change the value at the memory address pointed to by ptr
}
//^ Example:
struct User{
    char name[50];
    int age;
    float height;
};


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
        //$ Think of it as a matrix or a table with rows and columns. Each element in a 2D array can be accessed using two indices: one for the row and one for the column. For example, in a 3x3 matrix, you can access the element in the second row and third column using matrix[1][2] (since array indices start at 0).
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

    // * Qs on Multi-Dimensional Arrays:
    // & Diagonal Sum of a Square Matrix:
    // int n;
    // printf("Order of Square matrix:");
    // scanf("%d",&n);
    // int matrix [n][n];
    // for (int i = 0; i < n;i++){
    //     for (int j = 0; j < n; j++){
    //         printf("matrix[%d][%d]:",i,j);
    //         scanf("%d",&matrix[i][j]);
    //         printf("\n");
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         printf("%d ", matrix[i][j]); // Print each element of the 2D array followed by a space
    //     }
    //     printf("\n"); // Print a new line after each row
    // }

    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += matrix[i][i];
    // }
    // printf("Sum is %d",sum);


    // * Strings:
    // A string in C is an array of characters terminated by a null character '\0'. The null character indicates the end of the string. For example, the string "Hello" is stored as an array of characters: {'H', 'e', 'l', 'l', 'o', '\0'}.
    // char str[] = "Hello, World!"; // Declaration and initialization of a string
    //! No need to explicitly add the null character '\0' at the end of the string when using double quotes, as it is automatically added by the compiler. However, if you are declaring a string using a character array and initializing it with individual characters, you need to ensure that you include the null character at the end to properly terminate the string. For example:
    // char str[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Declaration and initialization of a string with explicit null character
    //$ Another use case of '\0' is to create an empty string. An empty string is a string that contains no characters and is represented by a null character at the beginning. For example:
    // char emptyStr[] = ""; // Declaration and initialization of an empty string (contains only the null character '\0')
    // char emptyStr[] = {'\0'}; // Declaration and initialization of an empty string using a character array (contains only the null character '\0')
    // $ Another use case is to print characters of string one by one using a loop until we encounter the null character '\0'. For example:
    // char str[] = "Hello, World!";
    // for (int i = 0; str[i] != '\0'; i++) {
    //     printf("%c ", str[i]); // Print each character of the string followed by a space
    // }

    //! When we input String using scanf, we do not need to write & before the string variable because the name of the array (string) itself acts as a pointer to the first element of the array. The scanf function expects a pointer to the variable where it will store the input, and since the name of the array is already a pointer to its first element, we can directly pass it to scanf without using the address-of operator (&).
    // example: char str[20]; 
    // printf("Enter a string: ");
    // scanf("%s", str); // No need to use & before str.

    //! scanf terminates at "space". So if we input "Hello World", only "Hello" will be stored in the string variable, and "World" will be left in the input buffer. 
    //$ Scanset can be used to read a string with spaces. For example:
    // char str[50];
    // printf("Enter a string: ");
    // scanf("%[^\n]", str); //^ This will read the entire line of input until a newline character is encountered, allowing you to input strings with spaces.

    //$ To read a string with spaces using fgets, you can use the following code:
    // char str[50];
    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin); //^ This will read a line of input from the user, including spaces and also the newline character, and store it in the str variable. The sizeof(str) ensures that we do not exceed the buffer size of the str array.
    
    //? Q: How to remove the newline character added by fgets at the end of the string?
    // A: The newline character added by fgets can be removed by replacing it with a null character '\0'. This can be done using the following code:
    // char str[50];
    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0'; // Remove the newline character

    //? Q: What is the difference between scanf and fgets for reading strings in C?
    // A: The main difference between scanf and fgets for reading strings in C is that scanf stops reading input at the first whitespace character (space, tab, or newline), while fgets reads an entire line of input, including spaces, until a newline character is encountered. This means that scanf is not suitable for reading strings with spaces, while fgets can handle such input. Additionally, fgets also allows you to specify the maximum number of characters to read, which can help prevent buffer overflow issues.

    //? Q: Why should we use strlen instead of sizeof to get the length of a string in C?
    // A: We should use strlen instead of sizeof to get the length of a string in C because sizeof returns the size of the array in bytes, which includes the null terminator '\0' at the end of the string. On the other hand, strlen calculates the length of the string by counting the number of characters until it reaches the null terminator, giving you the actual length of the string without including the null character. Therefore, using sizeof will give you a larger value than the actual length of the string, while strlen will provide you with the correct length.

    //* <string.h> library functions:
    // strlen(str): Returns the length of the string str.
    // strcpy(dest, src): Copies the string src to the destination dest.
    // strcat(dest, src): Concatenates the string src to the end of the destination dest.
    // strcmp(str1, str2): Compares two strings and returns an integer (on the basis of their ASCII values) indicating their relationship.
    // strncmp(str1, str2, n): Compares the first n characters of two strings and returns an integer indicating their relationship.
    
    //& Palindrome Check:

    // char str[50];
    // printf("Enter a string: ");
    // scanf("%[^\n]", str); // Read a string with spaces

    // int i = 0, j = strlen(str) - 1;
    // int isPalindrome = 1; //$ Flag to indicate if the string is a palindrome

    // while (i <= j) {
    //     if (str[i] != str[j]) {
    //         isPalindrome = 0; // Set the flag to false if characters do not match
    //         break; // Exit the loop since we found a mismatch
    //     }
    //     i++; // Move the left pointer towards the center
    //     j--; // Move the right pointer towards the center
    // }
    // printf((isPalindrome==0)?"Not a palindrome":"Palindrome");

    //& Toggle Case of a String:
    // char str[50];
    // printf("Enter a string: ");
    // scanf("%[^\n]", str); // Read a string with spaces
    // for (int k = 0; k < strlen(str); k++) {
    //     if (str[k] >= 'a' && str[k] <= 'z') {
    //         str[k] = str[k] - ('a' - 'A'); // $ Convert lowercase to uppercase
    //     } else if (str[k] >= 'A' && str[k] <= 'Z') {
    //         str[k] = str[k] + ('a' - 'A'); // $ Convert uppercase to lowercase
    //     }
    // }
    // printf("Toggled case string: %s", str);
    // return 0;

    //* Pointers:

    //? Q:What are pointers in C?
    // A: A pointer in C is a variable that stores the memory address of another variable. It allows you to indirectly access and manipulate the value stored at that memory address. Pointers are used for various purposes, such as dynamic memory allocation, passing arguments to functions by reference, and creating complex data structures like linked lists and trees.

    //? Q: Syntax for declaring a pointer:
    // A: data_type *pointer_name = &variable_name; // Example: int *ptr = &int_var; // Declaration of a pointer to an integer variable

    //? Q: What is the use of %u format specifier in C?
    // A: The %u format specifier in C is used to print an unsigned integer. It expects an unsigned integer as an argument and prints its value in decimal format. For example:
    // unsigned int num = 42;
    // printf("Unsigned integer: %u\n", num); // Output: Unsigned integer: 42
    //$ Unsigned integer is a data type that can only represent non-negative values (0 and positive integers). It is commonly used when you know that the variable will never hold a negative value, allowing you to utilize the full range of positive values for that data type.
    // Size of unsigned int is typically the same as the size of int, which is usually 4 bytes (32 bits) on most platforms, but it can vary depending on the architecture and compiler.


    // ^ Example:
    // int num = 42; // Declare an integer variable
    // int *ptr = &num; // Declare a pointer to an integer and initialize it with the address of num
    // printf("Value of num: %d\n", num); // Print the value of num
    // printf("Address of num: %p\n", &num); // Print the memory address of num //! %p used for pointers
    // printf("Value stored in ptr (address of num): %p\n", ptr); // Print the value stored in ptr, which is the address of num
    // printf("Value pointed to by ptr: %d\n", *ptr); // Print the value pointed to by ptr, which is the value of num
    //! * is called value at operator or dereference operator. It is used to access the value stored at the memory address pointed to by the pointer.
    // printf("Value pointed to by ptr: %d\n", &ptr); // This will print the memory address of the pointer variable ptr itself, not the value it points to. The & operator is used to get the address of a variable, so &ptr gives you the address of the pointer variable ptr.

    //$Output:
    // Value of num: 42
    // Address of num: 0x7ffee3bff5ac (this will vary each time you run the program)
    // Value stored in ptr (address of num): 0x7ffee3bff5ac (this will be the same as the address of num)
    // Value pointed to by ptr: 42
    // Value pointed to by ptr: 0x7ffee3bff5a0 (this will be the memory address of the pointer variable ptr itself, which is different from the address of num)
    

    // * Double pointers:

    //? Q: What is a double pointer in C?
    // A: A double pointer in C is a pointer that points to another pointer. It is used to store the address of a pointer variable, allowing for multiple levels of indirection. Double pointers are often used in situations where you need to modify the value of a pointer variable within a function or when working with dynamic memory allocation for multi-dimensional arrays.   

    //? Q: Syntax for declaring a double pointer:
    // A: data_type **double_pointer_name = &pointer_name; 
    // A: Example: int **doublePtr = &ptr; // Declaration of a double pointer to an integer pointer variable

    //? Use of double pointers:
    // A: Double pointers are used when you want to modify the value of a pointer variable within a function. Since C uses pass by value, if you want to change the value of a pointer variable (i.e., make it point to a different address), you need to pass a pointer to that pointer variable, which is a double pointer. This allows the function to access and modify the original pointer variable's value, effectively changing where it points to.

    // int num = 42;
    // int *ptr = &num; // Pointer to an integer
    // int **doublePtr = &ptr; // Pointer to a pointer to an integer
    // printf("Value of num: %d\n", num); // Print the value of num
    // printf("Value pointed to by ptr: %d\n", *ptr); // Print the value pointed to by ptr, which is the value of num
    // printf("Value pointed to by doublePtr: %d\n", **doublePtr); // Print the value pointed to by doublePtr, which is the value of num
    // printf("Address of num: %p\n", &num); // Print the memory address of num
    // printf("Address stored in ptr (address of num): %p\n", ptr); // Print the value stored in ptr, which is the address of num
    // printf("Address stored in doublePtr (address of ptr): %p\n", double  Ptr); // Print the value stored in doublePtr, which is the address of ptr
    // printf("Address of ptr: %p\n", &ptr); // Print the memory    address of the pointer variable ptr itself
    // printf("Address of doublePtr: %p\n", &doublePtr); // Print   the memory address of the pointer variable doublePtr itself

    //$ Output:
    // Value of num: 42
    // Value pointed to by ptr: 42
    // Value pointed to by doublePtr: 42
    // Address of num: 0x7ffee3bff5ac (this will vary each time you run the program)
    // Address stored in ptr (address of num): 0x7ffee3bff5ac (this will be the same as the address of num)
    // Address stored in doublePtr (address of ptr): 0x7ffee3bff5a0 (this will be the memory address of the pointer variable ptr itself)
    // Address of ptr: 0x7ffee3bff5a0 (this will be the same as the address stored in doublePtr)
    // Address of doublePtr: 0x7ffee3bff598 (this will be the memory address of the pointer variable doublePtr itself)

    //! Triple pointers and beyond also exist, but they are less commonly used and can make code more complex and harder to read. They are typically used in very specific scenarios, such as when working with arrays of pointers or when implementing certain data structures.

    //^ Changing Value of variable using pointer ;
    // int num = 42;
    // int *ptr = &num; // Pointer to an integer
    // printf("Value of num before change: %d\n", num); // Print the value of num before change
    // *ptr = 100; // Change the value of num using the pointer
    // printf("Value of num after change: %d\n", num); // Print the value of num after change
    
    //* Pass by reference using pointers:
    // int num = 42;
    // printf("Value of num before change: %d\n", num); 
    // valueChange(&num); //$ Pass the address of num to the function to change its value
    // printf("Value of num after change: %d\n", num);


    //* STRUCTURES:
    
    //$ Method 1: Using dot operator to assign values to structure members:
    struct User user1; // Declaration of a structure variable user1 of type User
    user1.age = 19; // Accessing and assigning value to the age member of user1
    user1.height = 5.7; // Accessing and assigning value to the height
    strcpy(user1.name, "Dynost"); // Accessing and assigning value to the name member of user1 using strcpy function from string.h library
    
    //$ Method 2: Using list initialization (available in C99 and later):
    struct User user2 = {"TOP", 25, 5.11}; // Declaration and initialization of a structure variable user2 of type User

    //? Q: Why do we use strcpy to assign a string to the name member of the structure instead of using the assignment operator (=)?
    // A: We use strcpy to assign a string to the name member of the structure because in C, you cannot directly assign a string to a character array using the assignment operator (=). The assignment operator does not work with arrays, and it will not copy the contents of the string into the character array. Instead, it will attempt to assign the pointer to the string literal, which can lead to undefined behavior. The strcpy function is specifically designed to copy the contents of one string into another, ensuring that the characters are properly copied into the character array and that it is null-terminated.

    printf("User1 Name: %s\n", user1.name); // Print the name member of user1
    printf("User1 Age: %d\n", user1.age); // Print the age
    printf("User1 Height: %.2f\n", user1.height); // Print the height member of user1 with 2 decimal places

    printf("User2 Name: %s\n", user2.name); // Print the name member of user2
    printf("User2 Age: %d\n", user2.age); // Print the age
    printf("User2 Height: %.2f\n", user2.height); // Print the height member of user2 with 2 decimal places

    //^ Copy Structure:
    struct User user3; 
    user3 = user1; // Copying the contents of user1 to user3 using assignment operator (this works for structures)
}

//* Structures:

//? Syntax for structure declaration:
// struct structure_name {
//     data_type member1;
//     data_type member2;
//     ...
// };

