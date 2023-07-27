// Q: Find x and y in Extended GCD
// A.x + B.y = gcd(A, B)
#include <bits/stdc++.h>
using namespace std;
// Extended Euclidean Algorithm
int egcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int x1, y1;
    int d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int x, y;
        int gcd = egcd(a, b, x, y);
        cout << a <<"."<< x << " + " << b << "." << y << " = " << gcd << endl; 
    }
    return 0;
}
