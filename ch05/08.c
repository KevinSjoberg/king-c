#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age;
	bool teenager;

	printf("Enter your age: ");
	scanf("%d", &age);

	teenager = age >= 13 && age <= 19;

	printf("age: %d; teenager: %d\n", age, teenager);

	return 0;
}
