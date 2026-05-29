#include <stdio.h>
#include <math.h>
int main() {

    //* Area of a Rectangle and Circle
    // float l,b,r;
    // l = 5.0; // Length of the rectangle
    // b = 3.0; // Breadth of the rectangle
    // r = 2.0; // Radius of the circle
    // float pi = 3.14;
    // printf("Area of Rectangle: %.2f\n", l * b); // Area = length * breadth
    // printf("Area of Circle: %.2f\n", pi * pow(r,2));

    //* Compound Interest
    float P,r,A,CI;
    int t;
    P = 1000;
    r = 5;
    t = 2;

    A = P * pow((1 + r/100),t);
    CI = A - P;
    
    printf("The CI is: %.2f\n", CI);
}