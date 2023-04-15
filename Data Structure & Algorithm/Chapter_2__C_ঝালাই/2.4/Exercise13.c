// Q:
#include<stdio.h>
#include<math.h> 
int main()
{
    int n; double x;
    scanf("%d %lf", &n, &x);    //input x in degree
    x = x*3.1416/180;           //converted degree into radian

    double sum = 0.0, sign = 1.0;
    for(int i = 0; i < n; i++)
    {
        double fact = 1.0;
        for (int j = 2*i; j > 0; j--)
            fact *= j;
        sum += sign * (pow(x,2.0*i)/fact);
        sign *= -1.0;
    }
    printf("%lf",sum);
    return 0;
}

// accuracy rate < 100%

