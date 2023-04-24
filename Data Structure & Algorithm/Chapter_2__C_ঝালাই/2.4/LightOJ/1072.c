// Q: https://lightoj.com/problem/calm-down
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        double pi = acos(-1);
        double R;
        int n;
        scanf("%lf %d", &R, &n);
        double r = (R*sin(pi/n*1.0)) / (1 + sin(pi/n*1.0));;
        printf("Case %d: %.10lf\n", i, r);
    }
    return 0;
}