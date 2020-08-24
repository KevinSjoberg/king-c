#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4;
	int min, min1, min2, max, max1, max2;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

	if (i1 > i2) {
		max1 = i1;
		min1 = i2;
	} else {
		max1 = i2;
		min1 = i1;
	}

	if (i3 > i4) {
		max2 = i3;
		min2 = i4;
	} else {
		max2 = i4;
		min2 = i3;
	}

	max = max1 > max2 ? max1 : max2;
	min = min1 < min2 ? min1 : min2;

	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);

	return 0;
}
