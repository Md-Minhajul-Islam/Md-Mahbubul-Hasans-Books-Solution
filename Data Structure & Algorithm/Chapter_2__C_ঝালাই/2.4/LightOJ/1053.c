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
        
        if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
            printf("Case %d: yes\n", i);
        else 
            printf("Case %d: no\n", i);            
    }
    return 0;
}

