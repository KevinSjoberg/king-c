#include <stdio.h>

int main(void)
{
	float num, max = 0.0f;

	for (;;) {
		printf("Enter a number: ");
		scanf("%f", &num);

		if (num > max)
			max = num;

		if (num <= 0)
			break;
	}

	printf("The largest number entered was %.2f\n", max);

	return 0;
}
