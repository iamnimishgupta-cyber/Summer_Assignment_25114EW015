#include <stdio.h>
int main(){
    int num, largestprime = -1;

    printf("enter a number: ");
    scanf("%d", &num);

    for(int i =2; i <= num; i++){
        while(num % i == 0){
            largestprime = i;
            num /= i;
        }
    }
    printf("largest prime factor = %d\n", largestprime);

    return 0;
}