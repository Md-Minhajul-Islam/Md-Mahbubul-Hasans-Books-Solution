// Q: দুটি সংখ্যার মধ্যে বড়টি প্রিন্ট কর

#include<stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    if(a > b)
        printf("%lf", a);
    else   
        printf("%lf", b);

    return 0;
}