#include <stdio.h>

int main(void)
{
	int num_days, week_start;

	printf("Enter number of days in month: ");
	scanf("%d", &num_days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &week_start);

	for(int i = 1; i <= num_days + week_start - 1; i++) {
		if (i < week_start)
			printf("   ");
		else
			printf("%3d", i - week_start + 1);

		if (i % 7 == 0)
			printf("\n");
	}

	printf("\n");

	return 0;
}
