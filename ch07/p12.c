#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    char ch;
    float result = 0.0f, n = 0.0f;
    bool exp_done = false;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while (!exp_done) {
        scanf("%c", &ch);

        switch (ch) {
        case '+':
            scanf("%f", &n);
            result += n;
            break;
        case '-':
            scanf("%f", &n);
            result -= n;
            break;
        case '*':
            scanf("%f", &n);
            result *= n;
            break;
        case '/':
            scanf("%f", &n);
            result /= n;
            break;
        case '\n':
            exp_done = true;
        }
    }

    printf("Value of expression: %.2f\n", result);

    return 0;
}
