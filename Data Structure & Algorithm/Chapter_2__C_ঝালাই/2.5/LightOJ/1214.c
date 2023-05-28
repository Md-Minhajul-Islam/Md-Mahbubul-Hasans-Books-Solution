// Q: https://lightoj.com/problem/large-division
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        char bigInteger[205];
        int divisor;
        scanf("%s %d", bigInteger, &divisor);
        if(bigInteger[0] == '-') bigInteger[0] = '0';
        if(divisor < 0) divisor *= -1;
        int len = strlen(bigInteger);
        long long dividend = 0;
        for(int i = 0; i < len; i++)
        {
            dividend = dividend * 10 + (bigInteger[i]-'0');
            dividend = dividend%divisor;
        }
        if(dividend == 0) printf("Case %d: divisible\n",caseNo);
        else printf("Case %d: not divisible\n", caseNo);
    }
    return 0;
}