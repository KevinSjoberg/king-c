#include <stdbool.h>
#include <stdio.h>

#define N_DIGITS 10

int main(void)
{
    bool has_repeated_digits = false;
    int digit_seen[N_DIGITS] = { 0 };
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit_seen[n % 10]++;
        if (digit_seen[n % 10] > 1 && !has_repeated_digits)
            has_repeated_digits = true;
        n /= 10;
    }

    if (has_repeated_digits) {
        printf("Repeated digit(s):");
        for (int i = 0; i < N_DIGITS; i++)
            if (digit_seen[i] > 1)
                printf(" %d", i);
        printf("\n");
    } else {
        printf("No repeated digits\n");
    }

    return 0;
}
