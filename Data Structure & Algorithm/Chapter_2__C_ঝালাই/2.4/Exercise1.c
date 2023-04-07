// Q: 1+2+3+...+n

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    long long int sum = 0;
    for(i = 1; i <= n; i++)
        sum += i;

    printf("%lld\n", sum);

    //sum = n*(n+1)/2 --> formula
    return 0;
}