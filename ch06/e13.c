#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter a number: ");
    scanf("%d", &m);

    for (n = 0; m > 0; m /= 2, n++)
        /* empty loop body */;

    printf("n is %d\n", n);

    return 0;
}
