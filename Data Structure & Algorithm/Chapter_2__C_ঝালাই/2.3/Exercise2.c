// Q: n এর মান দেওয়া আছে, তোমাকে Sum(i=1 to n) of i*(n-i+1) এর মান বের করতে হবে| (if-else)

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = n * (n+1) * ((n+2)/6);
    printf("%lf", sum);

    return 0;
}