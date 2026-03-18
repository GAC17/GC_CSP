// GC 3rd period LaRose Finical Calc
#include <stdio.h>
#include <math.h>

float ask (char* bill){
    float money;
    printf("Whats your monthly %s (bill)\n", bill);
    scanf("%s",&money);
    return money;
}

float precentage (char*precent){
    
}

int main() {
    ask("income");
    ask("rent");
    ask("utilites");
    ask("groceries");
    ask("transit");
    return 0;
}
//def question(cost):
   //bill = float(input(f"What is your monthly {cost} "))
   //return bill

//def precent(cost, income):
   //cost_precent = round ((cost/income)*100, 2)
  // return cost_precent

