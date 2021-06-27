#include <stdbool.h>
#include <stdio.h>

#define N_DIGITS 10

int main(void)
{
    int digit_seens[N_DIGITS] = { 0 };
    long n, tmp;

    do {
        printf("Enter a number: ");
        scanf("%ld", &n);

        tmp = n;
        do {
            digit_seens[tmp % 10]++;
            tmp /= 10;
        } while (tmp > 0);
    } while (n > 0);

    printf("Digit:     ");
    for (int i = 0; i < N_DIGITS; i++)
        printf(" %d", i);
    printf("\nOccurences:");
    for (int i = 0; i < N_DIGITS; i++)
        printf(" %d", digit_seens[i]);
    printf("\n");

    return 0;
}
