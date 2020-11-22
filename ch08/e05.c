#include <stdio.h>

#define N 40

int main(void)
{
    int fib_numbers[N] = { 0, 1 };

    for (int i = 1; i < N - 1; i++)
        fib_numbers[i + 1] = fib_numbers[i - 1] + fib_numbers[i];

    for (int i = 0; i < N; i++)
        printf("%d\n", fib_numbers[i]);

    return 0;
}
