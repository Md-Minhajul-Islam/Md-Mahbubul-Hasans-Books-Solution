// Q: তিনটি সংখ্যা ইনপুট নিয়ে তাদের ছোট হতে বড় অনুসারে প্রিন্ট কর

#include<stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a < b && a < c)
    {
        if(b < c)
            printf("%lf %lf %lf\n", a, b, c);
        else
            printf("%lf %lf %lf\n", a, c, b);
    }
    else if(a > b && a > c)
    {
        if(b < c)
            printf("%lf %lf %lf\n", b, c, a);
        else    
            printf("%lf %lf %lf\n", c, b, a);
    }
    else
    {
        if(a > b)
            printf("%lf %lf %lf\n", b, a, c);
        else
            printf("%lf %lf %lf\n", c, a, b);
    }

    return 0;
}

