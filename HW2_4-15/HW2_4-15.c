#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0; 
    double rate;              
    int year = 15;          
    
    printf("Year\tAmount on deposit\n");
    
    for(rate = 0.10; rate <= 0.12; rate += 0.005) {
        double amount = principal * pow(1.0 + rate, year);
        printf("\nInterest Rate: %.1f%%\n", rate * 100);
        printf("Final amount after %d years: $%.2f\n", year, amount);
        printf("Total interest earned: $%.2f\n", amount - principal);
        printf("----------------------------------------\n");
    }
    
    return 0;
}
