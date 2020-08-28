#include <stdio.h>

int main(void)
{
    float loan, interest, monthly_payment;
    int num_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_payments);

    for (int i = 1; i <= num_payments; i++) {
        loan = loan - monthly_payment + loan * 6 / 100 / 12;
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);
    }

    return 0;
}
