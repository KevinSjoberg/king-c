#include <stdio.h>

int main(void)
{
	int i;
	float sum, term, n, j;

	printf("Enter a number: ");
	scanf("%f", &n);

	for (i = 1, j = 1.0f, sum = 1.0f, term = 1.0f; term > n; ++i, j *= i) {
		term = 1.0f / j;
		sum += term;
	}

	printf("%f\n", sum);

	return 0;
}
