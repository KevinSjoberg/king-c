#include <stdio.h>

int main(void)
{
    char op;
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by either +, -, *, or /: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

    switch (op) {
    case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        break;
    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        break;
    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        break;
    case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        break;
    default:
        result_num = 0;
        result_denom = 0;
    }

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
