#include <stdio.h>

int main() {
    double a, b;
    a = 3 / 2;
    printf("%f\n", a); /* 1.000000 */
    b = 3 / 2.0;
    printf("%f\n", b); /* 1.500000 */
    return 0;
}