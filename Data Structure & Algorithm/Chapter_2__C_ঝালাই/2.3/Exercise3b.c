// Q: তিনটি সংখ্যার মধ্যে বড়টি প্রিন্ট কর

#include<stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a > b && a > c)
        printf("%lf", a);
    else if(b > c)
        printf("%lf", b);
    else 
        printf("%lf", c);

    return 0;
}