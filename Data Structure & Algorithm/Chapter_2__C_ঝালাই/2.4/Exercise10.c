// Q: তোমাকে n দেওয়া আছে বলতে হবে এটি মৌলিক কি মৌলিক নয়
//this code looks big but it's very efficient
#include<stdio.h> 
int main()
{
    long long int n;
    scanf("%lld", &n);

    int isPrime = 1;
    if(n == 2 || n == 3)
        isPrime = 1;
    else if(n <= 1 || n % 2 == 0 || n % 3 == 0)
        isPrime = 0;
    else
    {
        for (long long int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}