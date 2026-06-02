#include <stdio.h>

// ? factorial using recursion
int fact(int a);
void printHello(int n);
int main() {
    printf("Enter a number:");
    int num;
    scanf("%d",&num);
    int f = fact(num);
    printf("Factorial is : %d", f);
    // printHello(5);
    return 0;
}

void printHello(int n){

    //* base case:
    if(n==0)
        return;

    printf("Hello\n");
    // * recursive call
    printHello(n-1);
}

int fact(int num){
    if (num == 1){
        return 1;
    }
    return num*fact(num-1); // Dry logic; n * ((n-1) * (n-2) * (n-3) * ...)
}