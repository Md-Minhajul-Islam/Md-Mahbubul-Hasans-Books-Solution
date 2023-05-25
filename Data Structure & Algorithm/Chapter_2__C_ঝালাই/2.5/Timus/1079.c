// Q: https://acm.timus.ru/problem.aspx?space=1&num=1079
#include<stdio.h>
#define MAX 99999
int arr[MAX+5];
void arr_function()
{
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= MAX; i++)
    {
        if(i%2 == 0) arr[i] = arr[i/2];
        else arr[i] = arr[i/2] + arr[(i+1)/2];
    }
    for(int i = 2; i <= MAX; i++)
        if(arr[i] < arr[i-1]) arr[i] = arr[i-1];
}
int main()
{
    arr_function();
    int n;
    while(scanf("%d", &n) && n != 0)
    {
        printf("%d\n", arr[n]);
    }
    return 0;
}