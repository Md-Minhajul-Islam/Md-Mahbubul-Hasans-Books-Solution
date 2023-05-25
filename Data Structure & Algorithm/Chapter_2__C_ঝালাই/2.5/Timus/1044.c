// Q: https://acm.timus.ru/problem.aspx?space=1&num=1044
#include<stdio.h>
int power(int n, int x)
{
    int pow = 1;
    for(int i = 0; i < x; i++)
        pow *= n;
    return pow;
}
int digitSum(int num)
{
    int sum = 0;
    while(num)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int main()
{
    int sum[37] = {0};    // max input is 8. So, half of that is 4 and 9+9+9+9 = 36
    int n;
    scanf("%d", &n);
    int half = power(10, n/2)-1;
    for(int i = 0; i <= half; i++)
    {
        int s = digitSum(i);
        sum[s]++;
    }
    int ans = 0;
    for(int i = 0; i <= half; i++)
    {
        int s = digitSum(i);
        ans += sum[s];
    }
    printf("%d", ans);
    return 0;
}
