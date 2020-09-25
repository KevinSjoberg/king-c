#include <stdio.h>

int main(void)
{
    int radius;
    printf("Enter a radius: ");
    scanf("%d", &radius);

    float volume = (4.0f / 3.0f) * 3.14159f * radius * radius * radius;

    printf("%f\n", volume);

    return 0;
}
