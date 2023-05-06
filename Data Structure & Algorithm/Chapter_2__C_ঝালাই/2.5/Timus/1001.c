// Q: https://acm.timus.ru/problem.aspx?space=1&num=1001
#include<stdio.h>
#include<math.h>
double a[256*1024];
int main()
{
    int i = 0;
    while(scanf("%lf", &a[i]) != EOF)
    {
        a[i++] = sqrt(a[i]);
    }
    while(--i >= 0)
    {
        printf("%.4lf\n", a[i]);
    }
    return 0;
}