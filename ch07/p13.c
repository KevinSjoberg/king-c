#include <stdio.h>

int main(void)
{
    char ch;
    float sum = 0;
    int word = 0, words = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        switch (ch) {
        case ' ':
            if (word != 0) {
                sum += word;
                words += 1;
                word = 0;
            }
            break;
        default:
            word += 1;
            break;
        }
    }

    if (word != 0) {
        sum += word;
        words += 1;
    }

    printf("Average word length: %.1f\n", sum / words);
}
