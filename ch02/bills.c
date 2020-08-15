#include <stdio.h>

int main(void)
{
    int dollars;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    int dollars_20, dollars_10, dollars_5, dollars_1;

    dollars_20 = dollars / 20;
    dollars = dollars - dollars_20 * 20;

    dollars_10 = dollars / 10;
    dollars = dollars - dollars_10 * 10;

    dollars_5 = dollars / 5;
    dollars = dollars - dollars_5 * 5;

    dollars_1 = dollars;

    printf("$20 bills: %d\n", dollars_20);
    printf("$10 bills: %d\n", dollars_10);
    printf(" $5 bills: %d\n", dollars_5);
    printf(" $1 bills: %d\n", dollars_1);

    return 0;
}
