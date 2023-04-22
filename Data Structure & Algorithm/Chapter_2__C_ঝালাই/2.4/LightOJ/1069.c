// Q: https://lightoj.com/problem/lift
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int me, lift;
        scanf("%d %d", &me, &lift);
            printf("Case %d: %d\n", i, 4*(me+(int)fabs(me-lift))+19); // 19 == (3times door open/close +
    }                                                            // 2times enter/exit)
    return 0;
}


