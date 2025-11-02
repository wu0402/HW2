#include <stdio.h>

int main() {
    float loan,interest,days,simple;
    
    printf("Enter loan principal (-1 to end) : ");
    scanf("%f", &loan);
    
    while (loan != -1) {
        printf("Enter interest rate : ");
        scanf("%f", &interest);
        printf("Enter term of the loan in days : ");
        scanf("%f", &days);
        simple = (loan * interest * days /365);
        printf("The interst charge is ¡G ");
        printf("%.1f",simple);
        printf("\n\nEnter loan principal (-1 to end) : ");
    	scanf("%f", &loan);
    }
    
    return 0;
}
