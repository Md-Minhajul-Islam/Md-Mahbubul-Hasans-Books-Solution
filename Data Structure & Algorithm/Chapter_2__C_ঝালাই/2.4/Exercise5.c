// Q: 1-2+3-4+5...nth term

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, sum = 0, sign = 1;
    for(i = 1; i <= n; i++)
    {
        sum += i*sign;
        sign *= -1;
    }
    printf("%d\n", sum);
    
    /*
    whithout loop solution--
    int ans;
    if(n%2 == 0)
        ans = -n/2;
    else
        ans = (n+1)/2;
    printf("%d", ans);
    */
    return 0;
}

