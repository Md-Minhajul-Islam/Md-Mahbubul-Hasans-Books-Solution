// Q: https://lightoj.com/problem/chocolate-thief
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n;
        scanf("%d", &n);
        char name[n][25];
        int volume[n];
        for(int i = 0; i < n; i++)
        {
            int l, w, h;
            scanf("%s %d %d %d", name[i], &l, &w, &h);
            volume[i] = l*w*h;
        }
        int minimum = volume[0], maximum = volume[0];
        int minIndex = 0, maxIndex = 0;
        for(int i = 1; i < n; i++)
        {
            if(minimum > volume[i])
                minimum = volume[i], minIndex = i;
            else if(maximum < volume[i])
                maximum = volume[i], maxIndex = i;
        }
        if(maxIndex != minIndex)
            printf("Case %d: %s took chocolate from %s\n", caseNo, name[maxIndex], name[minIndex]);
        else
            printf("Case %d: no thief\n", caseNo);
    }
    return 0;
}