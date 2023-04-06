// Q: একটি ত্রিভুজের তিনটি বাহুর দৈর্ঘ্য দেওয়া আছে, তার ক্ষেত্রফল নির্ণয় কর

#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c; //sides of the triangle
    scanf("%lf %lf %lf", &a, &b, &c);
    double s = (a + b + c) / 2.0;   //s = half of the perimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%lf", area); 
    return 0;
}