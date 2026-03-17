// GC NP AL 3rd period team game in c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main (){
    char name [50];
    char yesorno [50];
    printf("What is your name?:\n");
    scanf("%s", name);
    printf("Hello, %s do you wish to play tic tac toe?\n", name);
    scanf("%s", yesorno);
        if (yesorno == "yes"){
            printf("Welcome to tic tac toe\n");
        }else{
            printf("You still must play\n");
        };

        char spt0 = '0';
        char spt1 = '1';
        char spt2 = '2';
        char spt3 = '3';
        char spt4 = '4';
        char spt5 = '5';
        char spt6 = '6';
        char spt7 = '7';
        char spt8 = '8';
      
      
      
      
      
        printf(" %c | %c | %c \n", spt0, spt1, spt2);
        printf(" %c | %c | %c \n", spt3, spt4, spt5);
        printf(" %c | %c | %c \n", spt6, spt7, spt8);
      
      int myNum;
      printf("Select a board spot 0-8:\n");
     scanf("%d", &myNum);
     printf("Your number is %d", myNum);

    
      
    
      











    
    
    return 0;
}