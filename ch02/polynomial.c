#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a integer value for x: ");
    scanf("%d", &x);

 // Version 1
 //
 //   printf("%d\n",
 //       3 * x * x * x * x * x +
 //       2 * x * x * x * x -
 //       5 * x * x * x -
 //       x * x +
 //       7 * x -
 //       6);

 // Version 2
 printf("%d\n",
    ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}
