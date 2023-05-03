// Q: https://lightoj.com/problem/agent-j
#include<stdio.h>
#include<math.h>
double GetArea(double r, double angle)
{
    return 0.5*r*r*angle;   // Partial area formula
}
double GetAngle(double b, double c, double a)
{
    return acos((b*b + c*c - a*a) / (2.0*b*c));     // Oppposite angle formula
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        double r1, r2, r3;
        scanf("%lf %lf %lf", &r1, &r2, &r3);

        double a, b, c;     // sides of triangle
        a = r2+r3, b = r1+r3, c = r1+r2;
        // Calculate the angle created by each straight line that connects each pair of circles' centers
        double A, B, C;     // angles of triangle
        A = GetAngle(b, c, a), B = GetAngle(a, c, b), C = GetAngle(a, b, c);
        // Calculate the area of the triangle
        double s = (a+b+c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        // Deduct area taken by the three circles
        area -= GetArea(r1, A);
        area -= GetArea(r2, B);
        area -= GetArea(r3, C);
        
        printf("Case %d: %lf\n", i, area);
    }
    return 0;
}