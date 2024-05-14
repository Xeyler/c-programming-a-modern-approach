#include <stdio.h>

int main(void) {
    float loan_amount;
    float interest;
    float monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly interest: ");
    scanf("%f", &monthly_payment);

    interest = interest / 100 / 12;
    loan_amount = loan_amount * (1 + interest) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", loan_amount);
    loan_amount = loan_amount * (1 + interest) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan_amount);
    loan_amount = loan_amount * (1 + interest) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan_amount);
    return 0;
}