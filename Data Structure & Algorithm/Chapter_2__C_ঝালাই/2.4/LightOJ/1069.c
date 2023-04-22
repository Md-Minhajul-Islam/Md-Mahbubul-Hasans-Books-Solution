// Q: https://lightoj.com/problem/lift
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int me, lift;
        scanf("%d %d", &me, &lift);
        if(lift >= me)
            printf("Case %d: %d\n", i, (lift*4+19)); // 19 == (3times door open & close +
        else                                         // 2times enter & exit)
            printf("Case %d: %d\n", i, (me*8-lift*4+19)); //(me-lift)*4+(4*me)+19);
    }
    return 0;
}

