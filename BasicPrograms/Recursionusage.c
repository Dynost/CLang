#include <stdio.h>
#include <math.h>
//? When to use recursion?
// 1. When we have a problem that can be broken down into smaller subproblems of the same type.
// 2. When we want to solve a problem in a more elegant and concise way.

//? Loops vs Recursion
// 1. Loops are iterative, while recursion is a function calling itself.
// 2. Loops are generally more efficient in terms of time and space complexity, while recursion can lead to stack overflow if the base case is not reached or if the recursion depth is too large.

// int fact(int a);
// void printHello(int n);
//& Factorial using recursive
// int fibo(int n);

int power(int x,int y);

// & GCD
int GCD(int a,int b);
int main() {
    
    // & Fibonacci with Recursion (very slow execution)
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    //  printf("Fibonacci series up to %d terms:\n", n);
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", fibo(i));
    // }
    // printf("\n");

    // & Power Calculation
    // int x,y;
    // printf("Enter the base:");
    // scanf("%d", &x);
    // printf("\nEnter the expo: ");
    // scanf("%d",&y);
    // int p = power(x,y);
    // printf("The result is: %d \n",p);

    // & Finding GCD using eucledian algorithm
    int x,y;
    printf("Enter two numbers:");
    scanf("%d,%d", &x,&y);

    int GC = GCD(x,y);
    printf("\nGCD is: %d", GC);
    return 0;
}

// void printHello(int n){

//     //^ base case:
//     if(n==0)
//         return;

//     printf("Hello\n");
//     //^ recursive call
//     printHello(n-1);
// }

// int fact(int num){
    
//     if (num == 1){
//         return 1;
//     }
//     return num*fact(num-1); // Dry logic; n * ((n-1) * (n-2) * (n-3) * ...)
// }

int power(int x, int y){
    //^ Base Case:
    if (y==0)
        return 1;
    return x * power (x,y-1);
}
int fibo(int n){
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int GCD(int a,int b){
    if(a % b == 0)
        return b;
    return GCD(b,a%b);
    /*
    ?First call: GCD(5, 10)
    Check: 5 % 10 == 0? No
    ! 5 % 10 = 5 (since 5 goes into 10 zero times with remainder 5)
    Recurse: GCD(10, 5)
    Second call: GCD(10, 5) (now they're effectively swapped!)
    Check: 10 % 5 == 0? Yes
    Return 5*/

    /* 
    * Principle:
    The key is that the Euclidean algorithm works by repeatedly replacing the larger number with the remainder of division,
    so you need to swap the parameters each time: GCD(b, a%b)*/
}
