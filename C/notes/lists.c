//array = list on FONEM!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>
int main (){
    //example one
    int grades[] = { 74, 88, 95, 97, 87};
    printf("%d\n", grades [2]);

 // example two
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    //change an item in my list
    printf("%.2f\n", sizes [0]);
    sizes[0] = 10.45;
    printf("%.2f\n", sizes [0]);

    // example 3 on bronem

    char names[][20] = {"Gage", "Trevor", "Zac", "Jenna", "Steve", "Mandy"};

    printf("%s\n", names[4]);

    names[5] = " ";

    return 0;
}