#include <stdio.h>

int main(void)
{
    int n;
    int sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = 1;
    for (int i = 1; i <= n; i++) {
        sum = sum * i;
    }

    printf("Factorial of %d: %d\n", n, sum);

    return 0;
}
