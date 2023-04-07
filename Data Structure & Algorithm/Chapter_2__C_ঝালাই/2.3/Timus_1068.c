#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 0)
        printf("%d\n", 1); // 0+1 == 1;
    else if(n < 0)
    {
        n *= -1;
        int ans = -1*(n*(n+1)/2)+1;
        printf("%d\n", ans); 
    }
    else
        printf("%d\n", n*(n+1)/2);
    return 0;
}

