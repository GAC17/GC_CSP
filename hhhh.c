#include <stdio.h>

int main() {
    char name[50];   // variable to store user input

    printf("Please enter your name: ");
    scanf("%49s", name);   // read user input safely

    printf("\nHello, %s! Welcome to your first C program.\n", name);

    return 0;
}
