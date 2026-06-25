#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *ptr;

    ptr = (int*)calloc(n, sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Elements after calloc:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}