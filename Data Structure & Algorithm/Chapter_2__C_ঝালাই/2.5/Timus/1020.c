// Q: https://acm.timus.ru/problem.aspx?space=1&num=1020
// hint: দড়ির দৈর্ঘ্য হবে বহুভুজের পরিসীমা ও একটি পেরেকের পরিসীমার সমান।
// hint: The length of the rope will be equal to the perimeter of the polygon plus the perimeter of a nail.
// choose Language: G++ 9.2 x64
#include<stdio.h>
#include<math.h>
int main()
{
    double pi = acos(-1);
    int n;
    double r;
    scanf("%d %lf", &n, &r);
    double point[n][2];
    for(int i = 0; i < n; i++)
        scanf("%lf %lf", &point[i][0], &point[i][1]);
    double distance = 0.0;
    for(int i = 0; i < n; i++)
        distance += sqrt((point[i][0]-point[(i+1)%n][0])*(point[i][0]-point[(i+1)%n][0]) + (point[i][1]-point[(i+1)%n][1])*(point[i][1]-point[(i+1)%n][1]));
    distance += 2*pi*r;
    printf("%.2lf", distance);
    return 0;
}