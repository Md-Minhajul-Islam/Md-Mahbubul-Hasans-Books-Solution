// Q: https://lightoj.com/problem/positive-negative-sign
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        long long int n, m;
        scanf("%lld %lld", &n, &m);
        printf("Case %d: %lld\n", i, (n/2)*m);
    }
    return 0;
}


