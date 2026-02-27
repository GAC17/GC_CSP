// GC 3rd period Time of day LaRose
#include <stdio.h>
#include <string.h>
int main(){
    int time;
    printf("What time is it? (Military time only): ");
    scanf("%d",&time);
    
    if(time >= 2200){
        printf("Good night!\n");
    }else if (time >= 1100){
        printf("Good evening!\n");
    }else if (time >= 0600){
        printf("Good morning!\n");
    }else{
        printf("That's not a time now is it?");
    }
    return 0;
}
