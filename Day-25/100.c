#include <stdio.h>

int main()
{
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");

    if(source == NULL)
    {
        printf("Source file not found.\n");
        return 0;
    }

    target = fopen("target.txt", "w");

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    fclose(source);
    fclose(target);

    printf("File copied successfully.\n");

    return 0;
}