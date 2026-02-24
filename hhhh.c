// GC 3rd period
#include <stdio.h>

int main() {
    float income, rent, util, groceries, transport, savings,spend;
    printf("What's your monthly income: $");
    scanf("%f", income);
    printf("Rent: $");
    scanf("%f", rent);
    printf("Utilities: $");
    scanf("%f", util);
    printf("Your groceries: $");
    scanf("%f", groceries);
    printf("Transportation: $");
    scanf("%f", transport);
    savings = income * 0.10;
    spend = income - (rent + util + groceries + transport + savings);
    printf("Savings (10%%): $%.2f\n", savings);
    printf("Remaining to Spend: $%.2f\n", spend);
    printf("Rent: %.1f%%\n", (rent / income) * 100);
    printf("Utilities: %.1f%%\n", (util / income) * 100);
    printf("Groceries: %.1f%%\n", (groceries / income) * 100);
    printf("Transportation: %.1f%%\n", (transport / income) * 100);
    printf("Savings: %.1f%%\n", (savings / income) * 100);

    return 0;
}