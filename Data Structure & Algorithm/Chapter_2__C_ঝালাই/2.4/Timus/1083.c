// Problem link: https://acm.timus.ru/problem.aspx?space=1&num=1083
#include<stdio.h>
#include<string.h>
int main()
{
    char marks[20];
    int n, k;
    scanf("%d %s", &n, marks);
    k = strlen(marks);
    int ans = 1;
    if(k >= n)
        ans = n;
    else
        for(int i = 0; (n-i*k) > 0; i++)
            ans *= n-i*k;
    printf("%d", ans);
    return 0;
}


