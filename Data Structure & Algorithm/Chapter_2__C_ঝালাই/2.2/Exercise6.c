// Q: একটি ত্রিভুজের শীর্ষবিন্দুগুলোর স্থানাঙ্ক দেওয়া আছে, ক্ষেত্রফল প্রিন্ট কর

#include<stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double area = 0.5 * (x1*y2 + x2*y3 + x3*y1 - y1*x2 - y2*x3 - y3*x1); //formula
    if(area < 0)
        area = -1.0 * area;
    printf("%lf\n", area);
    return 0;
}