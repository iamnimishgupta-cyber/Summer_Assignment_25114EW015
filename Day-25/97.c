#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.\n");
        return 0;
    }

    printf("File Contents:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}