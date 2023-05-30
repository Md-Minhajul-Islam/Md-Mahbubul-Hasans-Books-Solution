// Q: https://lightoj.com/problem/hidden-secret
#include<stdio.h>
#include<string.h>
int main()
{

    int t;
    scanf("%d", &t);
    getchar();
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int freqArray1[26] = {0}, freqArray2[26] = {0};
        char name1[105], name2[105];
        gets(name1);
        gets(name2);
        for(int i = 0; i < strlen(name1); i++)
        {
            if(name1[i] >= 'A' && name1[i] <= 'Z')
                name1[i] = name1[i]+32;
            if(name1[i] >= 'a' && name1[i] <= 'z')
                freqArray1[name1[i]-'a']++;
        }
        for(int i = 0; i < strlen(name2); i++)
        {
            if(name2[i] >= 'A' && name2[i] <= 'Z')
                name2[i] = name2[i]+32;
            if(name2[i] >= 'a' && name2[i] <= 'z')
                freqArray2[name2[i]-'a']++;
        }
        int flag = 1;
        for(int i = 0; i < 26; i++)
        {
            if(freqArray1[i] != freqArray2[i])
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