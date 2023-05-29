// Q: https://lightoj.com/problem/pinocchio
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n;
        scanf("%d", &n);
        int arr[n+1];
        arr[0] = 2;    // initialing with the initial size of Pinocchio's nose
        for(int i = 1; i <= n; i++)
            scanf("%d", &arr[i]);
        int lies = 0;
        for(int i = 1; i <= n; i++)
        {
            lies += (arr[i]-arr[i-1]+4)/5;    // taking the ceiling value
        }
        printf("Case %d: %d\n", caseNo, lies);
    }
    return 0;
}