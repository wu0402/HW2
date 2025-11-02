#include <stdio.h>

int main() {
    double sales,end;
    
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);
    
    while (sales != -1) {
        
        end = ((sales * 0.09) +  200) ;
        printf("Salary is¡G");
        printf("%.1f",end);
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
    }
    
    return 0;
}
