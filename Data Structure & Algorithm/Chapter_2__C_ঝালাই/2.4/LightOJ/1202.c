// Q: https://lightoj.com/problem/bishops
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int r1, c1, r2, c2;
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        int row = fabs(r1-r2), col = fabs(c1-c2);
        if(row == col)                      // If |r1-r2| == |c1-c2|, both points are in same diagonal.
            printf("Case %d: 1\n", i);
        else if(row%2 == col%2)             // If |r1-r2| and |c1-c2| both are even or odd, 
            printf("Case %d: 2\n", i);      // points are in same color box, max 2 moves is requried.
        else                                // Points are not in same color box.
            printf("Case %d: impossible\n", i);
    }
    return 0;
}

