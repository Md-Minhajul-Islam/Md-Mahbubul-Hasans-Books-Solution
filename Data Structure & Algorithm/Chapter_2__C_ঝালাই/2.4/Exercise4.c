// Q: 1 + (2+3) + (4+5+6) + ... + nth term
// check pdf file for explanation

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int sum = 0;
    int i, j, k = 1;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= i; j++)
            sum += k++;

    printf("%lld\n", sum);

    // long long int ans = (long long int) n*(n+1)*(n*n+n+2)/8; --> formula
    // printf("%lld", ans);

    return 0;
}


