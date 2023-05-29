// Q: https://lightoj.com/problem/boiled-eggs
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n, p, q;
        scanf("%d %d %d", &n, &p, &q);
        int eggs[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &eggs[i]);
        int ans = 0, i = 0;
        while(((q -= eggs[i]) >= 0) && p-- && i < n)
        {
            ans++;
            i++;
        }
        printf("Case %d: %d\n", caseNo, ans);
    }
    return 0;
}