// Q: https://lightoj.com/problem/ekka-dokka
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        long long int w;
        scanf("%lld", &w);
        if(w % 2 != 0) 
            printf("Case %d: Impossible\n", i);
        else
        {
            long long int n = w/2;
            long long int m = 2;
            while(n % 2 == 0)
            {
                n /= 2;
                m *= 2;
            }
            printf("Case %d: %lld %lld\n", i, n, m);
        }                  
    }
    return 0;
}