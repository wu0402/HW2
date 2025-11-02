#include <stdio.h>

int main(void) {
    const int SIZE = 9;  
    int row, space, star;
    
    for (row = 1; row <= SIZE/2 + 1; row++) {

        for (space = 1; space <= SIZE/2 + 1 - row; space++) {
            printf(" ");
        }

        for (star = 1; star <= 2*row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    

    for (row = SIZE/2; row >= 1; row--) {

        for (space = 1; space <= SIZE/2 + 1 - row; space++) {
            printf(" ");
        }
 
        for (star = 1; star <= 2*row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
