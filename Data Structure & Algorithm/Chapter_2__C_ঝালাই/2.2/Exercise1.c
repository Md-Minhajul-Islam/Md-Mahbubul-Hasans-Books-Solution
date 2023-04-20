// Q: দুটি দ্বিমাত্রিক বিন্দুর স্থানাঙ্ক ইনপুট নিয়ে তাদের মাঝের দূরত্ব প্রিন্ট কর 

#include<stdio.h>
#include<math.h>

int main()
{
    double x1, y1, x2, y2;   
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    printf("%lf", distance);
    return 0; 
}