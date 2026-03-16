// GC NP AL 3rd period team game in c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
            printf("You still must play");
        };

    char show_board(board_spot);
    board1(" {board_spot[0]} | {board_spot[1]} | {board_spot[2]} \n");
    board2(" {board_spot[3]} | {board_spot[4]} | {board_spot[5]} \n");
    board3(" {board_spot[6]} | {board_spot[7]} | {board_spot[8]} \n");
    complete_board(board1 + board2 + board3);
    printf("%d", &complete_board);
    return complete_board;
 






///char board [9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};












    
    
    return 0;
}