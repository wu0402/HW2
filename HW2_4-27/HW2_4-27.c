#include <stdio.h>

int main(void) {
    int a, b, c;
    int limit = 500;
    int count = 0;

    printf("Pythagorean triples with sides <= %d\n", limit);
    printf("  a\t b\t c\n");
    printf("-------------------------\n");

    for (a = 1; a <= limit; ++a) {
        for (b = a; b <= limit; ++b) {       
            for (c = b; c <= limit; ++c) {   
                if (a * a + b * b == c * c) {
                    printf("%4d\t%4d\t%4d\n", a, b, c);
                    ++count;
                }
            }
        }
    }

    printf("\nTotal triples found: %d\n", count);
    return 0;
}
