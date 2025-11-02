#include <stdio.h>

int main(void) {
    int i, j;
    const int rows = 10;

    printf("(A)\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) printf("%s", "*");
        printf("\n");
    }

    printf("\n(B)\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) printf("%s", "*");
        printf("\n");
    }

    printf("\n(C)\n");
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) printf("%s", " ");
        for (j = 1; j <= i; ++j) printf("%s", "*");
        printf("\n");
    }

    printf("\n(D)\n");
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= rows - i; ++j) printf("%s", " ");
        for (j = 1; j <= i; ++j) printf("%s", "*");
        printf("\n");
    }

    return 0;
}
