// Q: https://lightoj.com/problem/brush-1
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int dust = 0;
        while(n--)
        {
            int num;
            scanf("%d", &num);
            if(num > 0)
                dust += num;
        }
        printf("Case %d: %d\n", i, dust);
    }
    return 0;
}


