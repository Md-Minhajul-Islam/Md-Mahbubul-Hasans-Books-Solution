// Q: https://lightoj.com/problem/palindromic-numbers-ii
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        char num[11];
        scanf("%s", num);
        int left = 0, right = strlen(num)-1, flag = 1;
        while(left < right)
        {
            if(num[left] != num[right])
            {
                flag = 0;
                break;
            }
            left++, right--;
        }
        if(flag)
            printf("Case %d: Yes\n", caseNo);
        else
            printf("Case %d: No\n", caseNo);
    }
    return 0;
}