#include <stdio.h>

int main (){
    //char name [50];
    char yesorno;
    //printf("What is your name?:\n");
    //scanf("%s", name);
    printf("Hello, do you wish to play tic tac toe?\n");
    scanf("%s", yesorno);
        if(yesorno &= "yes" || "Yes"){
            printf("Welcome to tic tac toe\n");
        }else{
            printf("You still must play");
        };
}