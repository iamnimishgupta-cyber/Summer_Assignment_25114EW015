#include <stdio.h>

int main()
{
    char str[100], temp;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
        length++;

    for(int i = 0; i < length - 1; i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted String: %.*s\n", length, str);

    return 0;
}