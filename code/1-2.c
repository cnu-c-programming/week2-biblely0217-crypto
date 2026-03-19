#include <stdio.h>

int main()
{
    char name[20];
    int id;
    float value;

    scanf("%s %d %f", name, &id, &value);

    printf("%-10s%010d%10.2f\n", name, id, value);

    return 0;
}