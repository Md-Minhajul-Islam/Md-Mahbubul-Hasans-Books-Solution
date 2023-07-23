// Q: x ও n দেওয়া আছে, তোমাকে cosx এর মান maclaurine series এর সাহায্যে বের করতে হবে। 
// cosx এর ধারাটি হচ্ছে 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - ... nth term
#include<stdio.h>
int main()
{
    int n; double x;
    scanf("%lf %d", &x, &n);    //input x in degree
    x = x*3.1416/180;           //converted degree into radian

    double sum = 1.0, term = 1.0;
    for(int i = 1; i <= n; i++)
    {
        term *= -1*x*x / ((2*i)*(2*i-1));
        sum += term;
    }
    printf("%.3lf",sum);
    return 0;
}

// Note: The higher value of n gives more accurate output


