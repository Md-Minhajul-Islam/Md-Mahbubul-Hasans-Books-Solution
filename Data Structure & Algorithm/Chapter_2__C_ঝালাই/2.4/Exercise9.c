// nth palindrome number
#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int cnt = 0, num = 0;
    while(cnt < n)
    {
        long long int flag = num;
        long long int rev = 0;
        while(flag)
        {
            long long int rem = flag%10;
            rev = 10*rev+rem;
            flag /= 10;
        }
        if (num == rev) cnt++;
        num++;    
    }
    printf("%lld\n", num-1);

    return 0;
}

