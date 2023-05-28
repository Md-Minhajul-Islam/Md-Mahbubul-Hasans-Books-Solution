// Q: https://lightoj.com/problem/digits-of-factorial
#include<stdio.h>
#include<math.h>
int main()
{
    double logarithmArray[1000001];
    logarithmArray[0] = 0;    //Don't do manual log for 0, it will throw an error
    for(int i = 1; i < 1000001; i++)
        logarithmArray[i] = logarithmArray[i-1] + log(i);   // log(n!) = log(n*n-1*....) = log(n)+log(n-1)+...
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n, base;
        scanf("%d %d", &n, &base);
        int digits =  logarithmArray[n]/log(base) + 1;
        printf("Case %d: %d\n", i, digits);
    }
    return 0;
}