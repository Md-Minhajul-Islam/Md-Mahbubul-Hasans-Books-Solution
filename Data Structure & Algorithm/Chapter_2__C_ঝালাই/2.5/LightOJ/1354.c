// Q: https://lightoj.com/problem/ip-checking
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int decimal[4], binary[4];
        for(int i = 0; i < 4; i++)
            scanf("%d.", &decimal[i]);
        for(int i = 0; i < 4; i++)
            scanf("%d.", &binary[i]);
        int flag;
        for(int i = 0; i < 4; i++)
        {
            int num = binary[i];
            binary[i] = 0, flag = 1;
            while(num)
            {
                binary[i] += num%10 * flag;
                num /= 10, flag *= 2;
            }
        }
        flag = 1;
        for(int i = 0; i < 4; i++)
        {
            if(decimal[i] != binary[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag) printf("Case %d: Yes\n", caseNo);
        else printf("Case %d: No\n", caseNo);
    }
    return 0;
}