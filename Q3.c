#include <stdio.h>

int main() {
    int n;
    long long factorial=1;

    printf("enter a number : ");
    scanf("%d",&n);

    for(int i=1 ; i <= n; i++){
        factorial = factorial * i;
    }

    printf("fact of %d = %lld\n", n, factorial);

    return 0;
}