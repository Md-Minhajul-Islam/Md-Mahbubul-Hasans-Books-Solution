//problem link: https://acm.timus.ru/problem.aspx?space=1&num=1264

#include<stdio.h>

int main()
{
    int n, m;
    
    scanf("%d %d", &n, &m);
    int ans = (m+1) * n;
    printf("%d\n", ans);

    return 0;
}