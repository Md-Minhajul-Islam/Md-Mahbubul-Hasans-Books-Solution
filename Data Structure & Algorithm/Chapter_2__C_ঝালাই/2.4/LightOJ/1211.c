// Q: https://lightoj.com/problem/intersection-of-cubes
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n, x, y, z, x2, y2, z2;
        x = y = z = 0;
        x2 = y2 = z2 = 1001;
        scanf("%d", &n);
        for(int j = 0; j < n; j++)
        {
            int a, b, c, a2, b2, c2;
            scanf("%d %d %d %d %d %d", &a, &b, &c, &a2, &b2, &c2);
            if(a > x) x = a;
            if(b > y) y = b;
            if(c > z) z = c;
            if(a2 < x2) x2 = a2;
            if(b2 < y2) y2 = b2;
            if(c2 < z2) z2 = c2;
        }
        if(x > x2 || y > y2 || z > z2)
            printf("Case %d: 0\n", i);
        else
        {
            int l = x2 - x, w = z2 - z, h = y2 - y;
            printf("Case %d: %d\n", i, l*w*h);   
        }
        
    }
    return 0;
}