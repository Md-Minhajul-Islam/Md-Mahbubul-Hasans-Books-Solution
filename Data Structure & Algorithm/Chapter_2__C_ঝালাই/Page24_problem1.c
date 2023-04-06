// Q: একটি ত্রিভুজের তিনটি বাহুর দৈর্ঘ্য দেওয়া আছে, তার তিনটি কোণ নির্ণয় কর

#include<stdio.h>
#include<math.h>

int main()
{
    double pi = acos(-1);
    double val = 180.0/pi;


    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double A, B, C; //angles
    A = acos((a*a - b*b - c*c) / (-2.0*b*c)) * val; //formula ['val' doesn't need in
    B = acos((b*b - a*a - c*c) / (-2.0*a*c)) * val; // calculator if calculator is 
    C = 180-(A+B);                                  // in degree(D) mode]

    printf("Angle A = %lf\nAngle B = %lf\nAngle C = %lf\n", A, B, C);

    return 0;
}