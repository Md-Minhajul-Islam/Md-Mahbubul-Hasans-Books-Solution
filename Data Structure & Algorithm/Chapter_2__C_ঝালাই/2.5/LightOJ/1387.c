// https://lightoj.com/problem/setu
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        printf("Case %d:\n", caseNo);
        int n, amount = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            char str[7];
            scanf("%s", str);
            if(str[0] == 'd')
            {
                int taka;
                scanf("%d", &taka);
                amount += taka;
            }    
            else    printf("%d\n", amount);
        }
    }
    return 0;
}