#include <stdio.h>

#define LETTER_GROUP_SIZE 3

int main(void)
{
    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n')
        if (ch >= 'A' && ch <= 'Z')
            putchar((ch - 'A') / LETTER_GROUP_SIZE + '2');
        else
            putchar(ch);

    putchar(ch);

    return 0;
}
