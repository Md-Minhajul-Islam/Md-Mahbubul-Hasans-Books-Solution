// Q: https://lightoj.com/problem/minimum-arc-distance
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int Ox, Oy, Ax, Ay, Bx, By;
        scanf("%d %d %d %d %d %d", &Ox, &Oy, &Ax, &Ay, &Bx, &By);
        double OA, AB, AOB;
        OA = sqrt((Ox-Ax)*(Ox-Ax) + (Oy-Ay)*(Oy-Ay));
        AB = sqrt((Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By));
        AOB = acos((2.0*OA*OA - AB*AB) / (2.0*OA*OA));
        printf("Case %d: %lf\n", i, OA*AOB);
    }
    return 0;
}

//arc length = (radius of the circle) * (angle created by the 2 points at the center of the circle, in radian)