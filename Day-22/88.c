#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Original Address: %p\n", (void*)ptr);

    ptr++;

    printf("After ptr++ Address: %p\n", (void*)ptr);
    printf("Value at new address: %d\n", *ptr);

    ptr++;

    printf("Next Value: %d\n", *ptr);

    return 0;
}