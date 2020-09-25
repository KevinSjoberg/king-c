#include <stdio.h>

int main(void)
{
    int d1_day, d1_month, d1_year,
        d2_day, d2_month, d2_year;
    int date_state;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1_month, &d1_day, &d1_year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2_month, &d2_day, &d2_year);

    if (d1_year > d2_year)
        date_state = 1;
    else if (d1_year < d2_year)
        date_state = -1;
    else if (d1_month > d2_month)
        date_state = 1;
    else if (d1_month < d2_month)
        date_state = -1;
    else if (d1_day > d2_day)
        date_state = 1;
    else if (d1_day < d2_day)
        date_state = -1;
    else
        date_state = 0;

    switch (date_state) {
    case -1:
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
        break;
    case 1:
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            d2_month, d2_day, d2_year, d1_month, d1_day, d1_year);
        break;
    default:
        printf("%d/%d/%.2d is the same as %d/%d/%.2d\n",
            d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
        break;
    }

    return 0;
}
