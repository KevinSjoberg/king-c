#include <stdbool.h>
#include <stdio.h>

#define N_DIGITS 10

int main(void)
{
    int digit_seens[N_DIGITS] = { 0 };
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit_seens[n % 10]++;
        n /= 10;
    }

    printf("Digit:     ");
    for (int i = 0; i < N_DIGITS; i++)
        printf(" %d", i);
    printf("\nOccurences:");
    for (int i = 0; i < N_DIGITS; i++)
        printf(" %d", digit_seens[i]);
    printf("\n");

    return 0;
}
