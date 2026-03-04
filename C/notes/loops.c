//  while loops notes
#include <stdio.h>
// includes to get a random number
#include <stdlib.h>
#include <time.h>

int main(){
    int i = 1;
    while(i <=10){
        printf("%d\n", i);
        i++; // ++ increases by one
    }

    // generate  a random numb
    srand(time(NULL));

    printf("%d\n", (rand() %100) + 50);
    printf("%d\n", (rand() %4) + 1);
    printf("%d\n", (rand() %160) + 100);

    // example 2
    int goose = (rand() %9 + 1);
    int count = 1;

    while (count < goose ){
        printf("Duck!\n");
        count ++;
        }
    printf("Goose!\n");

    // example 3
    int timer = 30;
    while (timer > 0){
        printf("%d\n", timer);
        timer = timer -2;
    }
    printf("Times up");
}