#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to create file.\n");
        return 0;
    }

    fprintf(fp, "Hello World\n");
    fprintf(fp, "Welcome to C Programming");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}