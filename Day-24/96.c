#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*)malloc(sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 0;
    }

    *ptr = 100;

    printf("Value = %d\n", *ptr);

    free(ptr);

    ptr = NULL;

    printf("Memory freed successfully.\n");

    return 0;
}