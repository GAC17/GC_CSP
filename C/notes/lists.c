//array = list on FONEM!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
int main (){
    //example one
    int grades[] = { 74, 88, 95, 97, 87};
    printf("%d\n", grades [2]);

 // example two
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    //change an item in my list
    printf("%.2f\n", sizes [0]);
    sizes[0] = 10.45;
    printf("%.2f\n", sizes [0]);

    // example 3 on bronem

    char names[][20] = {"Steve", "Mandy", "Jenna", "Zac", "Trevor", "Gage"};

    printf("%s\n", names[4]);

    // For Loop Example 1
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }
    // For loop Example 2
    srand(time(NULL));
    int guess = 0;
    for (int num = rand() %20 +1; num != guess; num = num){
        printf("\nGuess a random number between 1 and 20: ");
        scanf("%d", &guess);
        if (guess == num){
            printf("You've won!\n");
            break; // gets us out of the loop.
        }else if(guess < num){
            printf("Your guess is too low\n");
        }else{
            printf("Your guess is too high\n");
        }
    }
    printf("Game over!\n");
    
    //for loop example 3
    int length = sizeof(names)/sizeof(names[0]);
    
    for(int x = 0; x <length; x++){
        printf("%s Christensen\n", names[x]);
    }

    return 0;
}