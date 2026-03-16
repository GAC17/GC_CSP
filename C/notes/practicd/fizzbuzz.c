// GC 3rd period LaRose Fizz buzz
#include <stdio.h>
#include <string.h>
int main(){
    for (int i = 1; i <= 50; i++){
       if( i % 3 == 0 && i % 5 ==0){
    }else if (i % 3 == 0 ){
        printf("Fizz\n");
    }else if ( i % 5 == 0){
        printf("Buzz\n");
    }else{
        printf("%d\n", i);
    }
}
        return 0;
    }