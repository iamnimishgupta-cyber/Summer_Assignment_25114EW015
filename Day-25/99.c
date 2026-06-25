#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    fprintf(fp, "\nThis line is appended.");

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}