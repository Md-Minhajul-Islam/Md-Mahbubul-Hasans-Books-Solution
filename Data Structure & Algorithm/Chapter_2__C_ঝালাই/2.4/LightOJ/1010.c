// Q: https://lightoj.com/problem/knights-in-chessboard
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        if(m == 1 || n == 1)
           printf("Case %d: %d\n", i, m*n);
        else if(m==2 || n==2)
            printf("Case %d: %d\n", i, ((m*n/8*4)+((m*n)%8>=4? 4:(m*n)%8)));
        else
            printf("Case %d: %d\n", i, (m*n+1)/2);
    }
    return 0;
}


