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
        if (yesorno && "yes" "Yes"){
            printf("Welcome to tic tac toe\n");
        }else{
            printf("You still must play\n");
        };
    
      
       char spts[9] = {'0','1','2','3','4','5','6','7','8'};
      
      


       
        printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
        printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
        printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);
      



        while (true ){
                 int myNum;
      printf("Select a board spot 0-8:\n");
     scanf("%d", &myNum);

     if(myNum == 0){
    spts[0] = 'X';
        
     }
     if(myNum == 1){
    spts[1] = 'X';
        
     }
 if(myNum == 2){
    spts[2] = 'X';
        
     }
 if(myNum == 3){
    spts[3] = 'X';
        
     }
 if(myNum == 4){
    spts[4] = 'X';
        
     }
 if(myNum == 5){
    spts[5] = 'X';
        
     }
 if(myNum == 6){
    spts[6] = 'X';
        
     }
 if(myNum == 7){
    spts[7] = 'X';
        
     }
 if(myNum == 8){
    spts[8] = 'X';
        
     }
        printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
        printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
        printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);
        }

     //    int grades[] = { 74, 88, 95, 97, 87};
    //printf("%d\n", grades [2])
    return 0;
}


def win (board_spot);
    if spts[0]==spts[1]==spts[2]{
        printf("You win!");
        break;
    }else if
    
        
    
    
    
    
    
    
    
    
    
    
    return True
    elif board_spot[3]==board_spot[4]==board_spot[5]:
        printf("You Win!")
        return True
    elif board_spot[6]==board_spot[7]==board_spot[8]:
        print("You Win!")
        return True
   
    elif board_spot[0]==board_spot[4]==board_spot[8]:
        print("You Win!")
        return True
    elif board_spot[6]==board_spot[4]==board_spot[2]:
        print("You Win!")
        return True
    elif board_spot[6]==board_spot[7]==board_spot[8]:
        print("You Win!")
        return True
   
    elif board_spot[0]==board_spot[3]==board_spot[6]:
        print("You Win!")
        return True
    elif board_spot[1]==board_spot[4]==board_spot[7]:
        print("You Win!")
        return True
    elif board_spot[2]==board_spot[5]==board_spot[8]:
        print("You Win!")
        return True
