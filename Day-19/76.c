#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase String: ");
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }

    printf("\nLowercase String: ");
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }

    return 0;
}