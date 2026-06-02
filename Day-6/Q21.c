#include <stdio.h>
int main(){
    int num, binary[32], i = 0;

    printf("enter a decimal number: ");
    scanf("%d", &num);

    if(num == 0){
        printf("binary = 0");
        return 0;
    }

    while( num > 0){
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("binary = ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }

    return 0;
}