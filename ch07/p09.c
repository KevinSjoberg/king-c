#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char suffix;
    int hours, minutes;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &suffix);

    printf("Equivalent 24-hour time: ");

    if (toupper(suffix) == 'A')
        printf("%.2d:%.2d\n", hours == 12 ? 0 : hours, minutes);
    else
        printf("%.2d:%.2d\n", hours == 12 ? 12 : hours + 12, minutes);

    return 0;
}
