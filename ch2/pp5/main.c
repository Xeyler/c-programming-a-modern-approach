#include <stdio.h>

int main(void) {
    int x;
    long int result;

    printf("Input x: ");
    scanf("%d", &x);
    result =
          3 * x * x * x * x * x
        + 2 * x * x * x * x
        - 5 * x * x * x
        - 1 * x * x
        + 7 * x
        - 6;

    printf("%ld\n", result);
    return 0;
}