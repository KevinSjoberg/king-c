#include <stdio.h>

int main(void)
{
	int day, month, year;
	int min_day = 0, min_month = 0, min_year = 0, state = 0;

	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if (!year && !month && !day)
			break;

		if (!min_year && !min_month && !min_day) {
			min_year = year;
			min_month = month;
			min_day = day;
		}

		if (year < min_year)
			state = -1;
		else if (year > min_year)
			state = 1;
		else if (month < min_month)
			state = -1;
		else if (month > min_month)
			state = 1;
		else if (day < min_day)
			state = -1;
		else if (day > min_day)
			state = 1;
		else
			state = 0;

		if (state == -1) {
			min_year = year;
			min_month = month;
			min_day = day;
		}
	}

	printf("%d/%d/%.2d is the earliest date\n", min_month, min_day, min_year);

	return 0;
}
