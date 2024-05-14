#include <stdio.h>

int main(void) {
    int desired_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &desired_amount);

    printf("$20 bills: %d\n", desired_amount / 20);
    desired_amount %= 20;
    printf("$10 bills: %d\n", desired_amount / 10);
    desired_amount %= 10;
    printf("$5 bills: %d\n", desired_amount / 5);
    desired_amount %= 5;
    printf("$1 bills: %d\n", desired_amount);
    return 0;
}