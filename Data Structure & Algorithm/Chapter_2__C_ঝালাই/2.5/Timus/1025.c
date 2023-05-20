// Q: https://acm.timus.ru/problem.aspx?space=1&num=1025
#include<stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    int a[k];
    for(int i = 0; i < k; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < k-1; i++)    // sorting
    {
        int small = i;
        for(int j = i; j < k; j++)
            if(a[small] > a[j])
                small = j;
        if(small != i)
        {
            int temp = a[small];
            a[small] = a[i];
            a[i] = temp;
        }
    }
    int sum = 0;
    for(int i = 0; i < (k+1)/2; i++)
        sum += (a[i]+1)/2;
    printf("%d", sum);
    return 0;
}