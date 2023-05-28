// Q: https://lightoj.com/problem/false-ordering
#include<stdio.h>
int main()
{
    int divisorsArray[1001] = {0};  
    for(int i = 1; i < 1001; i++)       // counting the number of divisors for 1 to 1000
        for(int j = i; j < 1001; j+=i)
            divisorsArray[j]++;

    int sortedDivIndex[1001];
    for(int i = 0, index = 0; i <= 32; i++)     // found maximum number of divisors for a number is 32
        for(int j = 1000; j >= 0; j--)
            if(divisorsArray[j] == i)
                sortedDivIndex[index++] = j;

    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("Case %d: %d\n", i, sortedDivIndex[n]);
    }
    return 0;
}