#include <stdio.h>
int main() {
    // Pattern 1: Right-angled triangle
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // Pattern 2: Mirror Right Triangle:
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 4; j > i; j--){
    //         printf(" ");
    //     } 
    //     for (int k = 0; k <= i; k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // Pattern 3: V
    // int n=5;
    // for(int i=1; i <= n; i++){
    //     for(int j=1; j< 2*n; j++){
    //         if(i == j || i+j == 2*n)
    //             printf("*");
    //         else
    //             printf(" ");
    //         }
    //         printf("\n");
    // }

    // Pattern 4: X
    // int n = 8;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         if (i + j == n + 1 || i == j)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // Pattern 5: centered pyramid
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // // Pattern 6: sideways pyramid
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (int i = n - 1; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}