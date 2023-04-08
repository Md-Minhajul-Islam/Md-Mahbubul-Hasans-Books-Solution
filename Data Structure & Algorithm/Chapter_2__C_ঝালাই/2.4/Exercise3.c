// Q: 1^3 + 2^3 + 3^3+ ...+ n^3

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    long long int sum = 0;
    for(i = 1; i <= n; i++)
        sum += i*i*i;

    printf("%lld\n", sum);

    //sum = (n*(n+1)/2)*(n*(n+1)/2) --> formula
    return 0;
}
