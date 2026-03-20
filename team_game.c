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

    while (true){
          
        char spts[9] = {'0','1','2','3','4','5','6','7','8'};

        printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
        printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
        printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);
   
   
   
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



printf ("\n");
 printf("Players' Turn\n");
        printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
        printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
        printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);



srand(time(NULL));
 
int bot= rand() %9; //bot turn here
  if(bot == 0){
    
    spts[0] = 'O';
        
     }
     if(bot == 1){
    spts[1] = 'O';
        
     }
 if(bot == 2){
    spts[2] = 'O';
        
     }
 if(bot == 3){
    spts[3] = 'O';
        
     }
 if(bot == 4){
    spts[4] = 'O';
        
     }
 if(bot == 5){
    spts[5] = 'O';
        
     }
 if(bot == 6){
    spts[6] = 'O';
        
     }
 if(bot == 7){
    spts[7] = 'O';
 } 
printf("Bots turn\n");
   

 if(bot == 8){
    spts[8] = 'O';
    

        
     }   
     
    
   
    }
    

          /*char* win = spts;
    if (spts[0]==spts[1] && spts[1] == spts[2]){
        printf("You win!");
        break;
    }else if(spts[3]==spts[4] && spts[5] == spts[4]){
        printf("You Win!");
        break;
    } else if(spts[6]==spts[7]&& spts[8]==spts[7]){
        printf("You Win!");
        break;
    }else if(spts[0]==spts[4]&&spts[8]==spts[4]){
        printf("You Win!");
        break;
    }else if(spts[6]==spts[4]&& spts[2]==spts[4]){
        printf("You Win!");
        break;
    }else if(spts[6]==spts[7]&&spts[8] == spts[7]){
        printf("You win!");
        break;
    }else if( spts[0]==spts[3]&&spts[6] == spts[3]){
        printf("You win!");
        break;
    }else if(spts[1]==spts[4]&& spts[7] == spts[4]){
        printf("You win!");
        break;
    }else if(spts[2]==spts[5]&& spts[8] ==spts[5]){
        printf("You win!");
        break;
    } 

    
}*/

return 0;
}

