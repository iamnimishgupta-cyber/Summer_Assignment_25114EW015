#include <stdio.h>
int main(){
    int start, end, num, temp, digit, sum;

    printf("enter starting number : ");
    scanf("%d", &start);

    printf("enter ending number : ");
    scanf("%d", &end);

    printf("Armstrong Numbers between %d and %d are:\n", start, end);

    for(num = start; num <= end ; num++){
        temp = num;
        sum = 0;
    
        while(temp != 0){
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if(sum == num)
           printf("%d ", num);
    }
    return 0;
}
