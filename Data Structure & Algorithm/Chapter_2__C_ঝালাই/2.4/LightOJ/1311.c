// Q: https://lightoj.com/problem/unlucky-bird
#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++)
    {
        double v1, v2, v3, a1, a2;
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        double t1 = v1/a1, t2 = v2/a2;
        double t = t1;
        if(t < t2) t = t2;
        double b = v3*t;
        double s1 = v1*t1 - 0.5*a1*t1*t1;
        double s2 = v2*t2 - 0.5*a2*t2*t2;
        double d = s1+s2;
        printf("Case %d: %.10lf %.10lf\n", i, d, b);
    }
    return 0;
}