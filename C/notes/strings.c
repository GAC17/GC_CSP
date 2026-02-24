#include <stdio.h>
#include <string.h>
// GC Strings notes, LaRose 3rd period
int main(){
    char subject[] = "Computer Science Principles\n";
    char book[100];
    char title[] = "Gage Christensen";

    //book[0] = "The way of king";
    printf("%s", subject);

    printf("Write the title of a book ");
    fgets(book, sizeof(book), stdin);
    //scanf("%s", &book);

    printf("\nThe book is %s\n", book);
    //concatenation in C

    char name[] = "Gage";
    char last[] = "Christensen";
    strcat(name, " ");
    strcat(name, last);

    char full_name[100];
    strcat(full_name, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    printf("%s\n", full_name);

    printf("%s\n", name);

    // length of string

    printf("%lu", strlen(name));

    return 0;
}