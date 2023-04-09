// Q: 1 + (2+3*4) + (5+6*7+8*9*10) +...+ nth term

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = 1, sum = 0, i, j, k;
    for(i = 1; i <= n; i++)
    {
        int innerterm = 1;
        for(j = 1; j <= i; j++)
        {
            for(k = 1; k <= j; k++)
            {
                innerterm *= cnt++;
            }
            sum += innerterm;
            innerterm = 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}