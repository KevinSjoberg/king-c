#include <stdio.h>

int main(void)
{
	int numerator, denominator;
	int m, n, r;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	m = numerator;
	n = denominator;

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}

	printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);

	return 0;
}
