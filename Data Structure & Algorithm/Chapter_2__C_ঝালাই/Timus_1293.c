//problem link: https://acm.timus.ru/problem.aspx?space=1&num=1293

#include<stdio.h>

int main()
{
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);
    int ans = (a * b * 2) * n;
    printf("%d\n", ans);

    return 0;
}