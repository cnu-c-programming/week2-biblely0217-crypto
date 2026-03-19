#include <stdio.h>

int main()
{
    printf("name        id        value\n");
    printf("%s %010d %10.2f\n", "kim", 12, 4.12);
    printf("%s %010d %10.2f\n", "lee", 1922, 3.21);
    printf("%s %010d %10.2f\n", "park", 432, 1.0);

    return 0;
}