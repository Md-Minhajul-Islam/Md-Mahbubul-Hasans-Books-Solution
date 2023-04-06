// Q: একটি বৃত্তের ব্যাসার্ধ দেওয়া আছে, তার পরিসীমা নির্ণয় কর

#include<stdio.h>
#include<math.h>

int main()
{
    double pi = acos(-1);

    double r;
    scanf("%lf", &r);
    double circumference = 2.0 * pi * r;
    printf("%lf\n", circumference);
    return 0;
}