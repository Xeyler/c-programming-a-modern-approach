#include <stdio.h>

int main(void) {
    int x;
    long int result;

    printf("Input x: ");
    scanf("%d", &x);
    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%ld\n", result);
    return 0;
}