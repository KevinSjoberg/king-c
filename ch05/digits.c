#include <stdio.h>

int main(void)
{
	int num, digits;

	printf("Enter a four-digit number: ");
	scanf("%4d", &num);

	if (num < 10)
		digits = 1;
	else if (num < 100)
		digits = 2;
	else if (num < 1000)
		digits = 3;
	else
		digits = 4;

	printf("The number %d has %d digits\n", num, digits);

	return 0;
}
