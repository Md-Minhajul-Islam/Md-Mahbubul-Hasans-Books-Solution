// Q: https://acm.timus.ru/problem.aspx?space=1&num=1313
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    int limit = 2*n-1;
    for(int i = 0; i < limit; i++)
    {
        for(int c = 0; c <= i && c < n; c++)
        {
            int r = i-c;
            if(r >= 0 && r < n) printf("%d ", arr[r][c]);
        }
    }
    return 0;
}