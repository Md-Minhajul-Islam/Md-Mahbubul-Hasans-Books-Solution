// Q: https://lightoj.com/problem/higher-math
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int hypotenuse, base, height;
        if(a >= b && a >= c)
            hypotenuse = a, base = b, height = c;
        else if(b >= c)
            hypotenuse = b, base = a, height = c;
        else
            hypotenuse = c, base = a, height = b;
        
        if(hypotenuse*hypotenuse == base*base + height*height)
            printf("Case %d: yes\n", i);
        else 
            printf("Case %d: no\n", i);            
    }
    return 0;
}

