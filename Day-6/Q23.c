#include <stdio.h>
int main(){
    int num, count = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    while(num){
        count += num & 1;
        num >>= 1;
    }

    printf("number of set bits = %d\n", count);

    return 0;
}