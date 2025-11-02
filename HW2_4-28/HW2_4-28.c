#include <stdio.h>

int main(void) {
    int paycode;
    double salary, hours, sales, pieces, price;

    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
            case 1: 
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                printf("Salary is $%.2f\n", salary);
                break;

            case 2: 
                printf("Enter hourly rate: ");
                scanf("%lf", &salary);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);
                
                if (hours <= 40)
                    printf("Salary is $%.2f\n", hours * salary);
                else
                    printf("Salary is $%.2f\n", 
                        (40 * salary) + ((hours - 40) * salary * 1.5));
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                salary = 250 + (sales * 0.057);
                printf("Salary is $%.2f\n", salary);
                break;

            case 4:
                printf("Enter number of pieces: ");
                scanf("%lf", &pieces);
                printf("Enter price per piece: ");
                scanf("%lf", &price);
                printf("Salary is $%.2f\n", pieces * price);
                break;

            default:
                printf("Invalid pay code.\n");
        }
        
        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}
