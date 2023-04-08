// Q: 1^2 + 2^2 + 3^2+ ...+ n^2

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    long long int sum = 0;
    for(i = 1; i <= n; i++)
        sum += i*i;

    printf("%lld\n", sum);

    //sum = n*(n+1)*(2*n+1)/6) --> formula
    return 0;
}

