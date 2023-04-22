// Q: https://lightoj.com/problem/circle-in-square
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        double r;
        scanf("%lf", &r);
        double squareArea = (r*2.0)*(r*2.0);
        double pi = 2 * acos(0.0);
        double circleArea = r*r*pi;
        double ans = (squareArea-circleArea)+0.000000001;
        printf("Case %d: %.2lf\n", i, ans);        
    }
    return 0;
}

