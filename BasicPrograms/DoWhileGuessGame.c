#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    int r = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    printf("A number has been generated successfully \n");
    printf("Guess the number: ");
    scanf("%d", &guess);
    
    if (guess == r) {
        printf("Correct Guess");
    } else {
        // Incorrect guess, you can add additional logic here if needed
    }

    do{
        if(guess > r){
            if (guess - r > 10) {
                printf("Too High");
            } else {
                printf("Little High");
            }
        } else {
            if (r - guess > 10) {
                printf("Too Low");
            } else {
                printf("Little Low");
            }
        }
    }while(guess != r);
    
    return 0;
}