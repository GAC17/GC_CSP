
#include <stdio.h>
// Example one
int add(int num_one, int num_two){
    return num_one + num_two;
}

// Example ywo (no return)
void greeting(char* name){
    printf("Hello %s. Welcome to my program!\n", name);
}

// Example 3
float area(int length, int width){
    return (float) length * width;
}

int main(void){
// exampl one contuined (function as value of variable)
    int total = add(40,2);
    printf("%d\n", total);

//exmaple 2 continued(call the same function many times)
    greeting("Jenna");
    greeting("Zac");
    greeting("Trevor");
    greeting("Gage");

    // EX 3 continued(Call the funtion direcrly in print statements)
    float rectangle = area(10, 5);
    printf("The area is: %.2f\n", rectangle);
    printf("The area is: %.2f\n", area (4,6));

//function == method == procedure 
    return 0;
}