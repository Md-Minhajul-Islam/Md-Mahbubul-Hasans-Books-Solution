// Q: https://acm.timus.ru/problem.aspx?space=1&num=1319
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int num = 1, limit = 2*n-1;
    for(int i = 0; i < limit; i++)
    {
        for(int r = 0; r <= i, r < n; r++)
        {
            int c = i - r;
            if(c >= 0 && c < n) 
                arr[r][c] = num++;
        }
    }
    for(int i = 0; i < n; i++){ 
        for(int j = n-1; j >= 0; j--)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}