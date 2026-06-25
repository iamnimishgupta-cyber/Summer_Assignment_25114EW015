#include <stdio.h>

int main()
{
    int n, flag = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is Upper Triangular\n");
    else
        printf("Matrix is Not Upper Triangular\n");

    return 0;
}