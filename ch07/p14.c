#include <math.h>
#include <stdio.h>

int main(void)
{
    double x, y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while (fabs(y - (y + (x / y)) / 2.0) > .00001 * y)
        y = (y + (x / y)) / 2.0;

    printf("Square root: %f\n", y);

    return 0;
}
