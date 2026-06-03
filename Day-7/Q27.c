#include <stdio.h>

int sumdigit(int n){
    if(n == 0)
    return 0;

    return(n % 10)+ sumdigit(n / 10);
}
int main(){
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    printf("sum of digits = %d\n", sumdigit(num));

    return 0;
}