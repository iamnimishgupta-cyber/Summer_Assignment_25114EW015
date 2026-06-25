#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 25.5;
    printf("Float: %.2f\n", d.f);

    printf("Integer after storing float: %d\n", d.i);

    return 0;
}