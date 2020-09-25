#include <stdio.h>

int main(void)
{
    int i;
    float sum, n, j;

    printf("Enter a number: ");
    scanf("%f", &n);

    for (i = 1, j = 1, sum = 1; i <= n; ++i, j *= i)
        sum += 1.0f / j;

    printf("%f\n", sum);

    return 0;
}
