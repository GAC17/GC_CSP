// GC 3rd period LaRose Fizz buzz
#include <stdio.h>
#include <string.h>
int main(){
    int number = 0;
    while(number <= 50)
        if (number % 3==0 && number % 5 ==0){
           printf("FizzBuzz");
        }else if (number % 3 == 0){
            printf("Fizz");
        }else if (number % 5 == 0){
            printf("Buzz");
        }else{
            printf("%d", number);
        }
        number = number ++;
    return 0;
}
