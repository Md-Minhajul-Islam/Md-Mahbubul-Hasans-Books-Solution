// Q: https://lightoj.com/problem/area-of-a-parallelogram
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int ax, ay, bx, by, cx, cy;
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        int dx = ax+(cx-bx), dy = ay+(cy-by);
        int area = 0.5 * (ax*by + bx*cy + cx*dy + dx*ay - ay*bx - by*cx - cy*dx - dy*ax);
        if(area < 0) area *= -1;
        printf("Case %d: %d %d %d\n", i, dx, dy, area);
    }
    return 0;
}