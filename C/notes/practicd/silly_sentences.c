// GC 3rd period LaRose silly sentences
#include <stdio.h>
#include <string.h>
int main(){
    char noun[50];
    char adj[50];
    char place[50];
    char fname[50];
    char lname[50];

    printf("Give all one word responses!\n");

    printf("Whats any first name: ");
    scanf("%s", fname);

    printf("Whats any last name: ");
    scanf("%s", lname);

    printf("Give me a noun: \n");
    scanf("%s", noun);

    printf("Give me a adjective: \n");
    scanf("%s", adj);

    printf("Give me a one word place: \n");
    scanf("%s", place);

    printf("\nThe %s named ",noun);
    strcat(fname, " ");
    strcat(fname,lname);
    printf("%s ", fname);
    printf("leaped and jumped over the %s folks around them and they'd made it to the place known as %s", adj, place);

    return 0;
}
