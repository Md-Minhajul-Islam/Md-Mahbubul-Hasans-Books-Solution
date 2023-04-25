// Q: https://lightoj.com/problem/division-by-3
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int con1 = (int) (b/3) * 2;    // 1. In three consecutive numbers, 
        if(b%3 == 2) con1++;           // two numbers are divisible by 3.
        a -= 1;                        // 2. Calculate from 1 to b & 1 to a-1
        int con2 = (int) (a/3) * 2;    // ans is diff. betw. the calculations.
        if(a%3 == 2) con2++;       
        printf("Case %d: %d\n", i, con1-con2);
    }
    return 0;
}