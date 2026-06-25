#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0')
        length++;

    if(str[length - 1] == '\n')
        length--;

    for(int i = 0, j = length - 1; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}