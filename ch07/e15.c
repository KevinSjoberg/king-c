#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void)
{
    printf("%zu\n", sizeof(Int8));
    printf("%zu\n", sizeof(Int16));
    printf("%zu\n", sizeof(Int32));

    return 0;
}
