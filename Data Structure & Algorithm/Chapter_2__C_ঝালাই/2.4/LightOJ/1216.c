// Q: https://lightoj.com/problem/juice-in-the-glass
#include<stdio.h>
#include<math.h>
int main()
{
    double pi = acos(-1);
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int r1, r2, h, p;
        scanf("%d %d %d %d", &r1, &r2, &h, &p);
        double r3 = p * (r1-r2) / (h*1.0) + r2;    // r3 = radius at height p
        double volume = pi/3.0 * p * (r3*r3 + r2*r2 + r2*r3);
        printf("Case %d: %.10lf\n", i, volume);
    }
    return 0;
}