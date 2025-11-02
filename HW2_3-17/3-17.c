#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance, charges, credits, creditLimit, newBalance;
    
    printf("Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);
    
    while (accountNumber != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);
        
        printf("Enter total charges: ");
        scanf("%lf", &charges);
        
        printf("Enter total credits: ");
        scanf("%lf", &credits);
        
        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);
        
        newBalance = (beginningBalance + charges - credits);
        
        
        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);
        
        
        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded.\n");
        }
        
        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }
    
    return 0;
}
