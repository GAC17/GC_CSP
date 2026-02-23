// GC LaRose 3rd period
#include <stdio.h>
#include <math.h>

int main (){
    float income, rent, util, grocery, transport;
    printf("Whats your monthly income\n");
    scanf("%f",income);
    printf("Whats your monthly rent?\n");
    scanf("%f", rent);
    printf("Whats your montly util bill\n");
    scanf("%f", util);
    printf("Whats  your monthly grocery bill\n");
    scanf("%f", grocery);
    printf("Whats your transportation bill?\n");
    scanf("%f",transport);

    float rentpercent = (rent / income) * 100.0;



    return 0;
}