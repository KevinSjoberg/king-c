#include <stdio.h>

int main(void)
{
	int item_number;
	int date_year, date_month, date_day;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_number);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &date_month, &date_day, &date_year);

	printf("Item\t\tUnit\t\t\tPurchase\n");
	printf("\t\tPrice\t\t\tDate\n");
	printf("%d\t\t$%8.2f\t\t%2.d/%2.d/%4.d\n", item_number, unit_price, date_month, date_day, date_year);

	return 0;
}
