#include <stdio.h>

int main(void) {
    int number, digit_1, digit_2, digit_3, digit_4, digit_5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    digit_5 = number % 8;
    number /= 8;
    digit_4 = number % 8;
    number /= 8;
    digit_3 = number % 8;
    number /= 8;
    digit_2 = number % 8;
    number /= 8;
    digit_1 = number % 8;
    printf("In octal, your number is: %d%d%d%d%d\n",
           digit_1,
           digit_2,
           digit_3,
           digit_4,
           digit_5);
    return 0;
}