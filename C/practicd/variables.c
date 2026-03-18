// This is a comment 
#include <stdio.h> // lets us create inputs and outputs
int main(){
    int number = 12;
    float pi = 3.14;
    char name [] = "Sawyer";
    char person[50]; 
    int age;
    printf("tell me your name\n");
    scanf("%s", &person);
    printf("Name is %s and age is %d\n", person, age);

    printf("Tell me how old you are\n");
    scanf("%d", &age);


    printf("%d\n", number); // \n tells the program to make a new line
    printf("%f\n", pi);
    printf("%s is %d years old\n", name , age);  
    return 0;
}