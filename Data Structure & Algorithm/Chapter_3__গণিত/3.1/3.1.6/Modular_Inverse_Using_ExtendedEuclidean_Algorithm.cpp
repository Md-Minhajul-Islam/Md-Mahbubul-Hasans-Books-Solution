// Q: Find the modular inverse of 'a' mod m.
// Extended Euclidean Algorithm
#include <bits/stdc++.h>
using namespace std;
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
    int a, mod;
    while (cin >> a >> mod)
    {
        int x, y;
        int gcd = egcd(a, mod, x, y);
        if(gcd != 1) cout << "No Solution!\n";
        else
        {
            x = (x%mod + mod)%mod;  // x maybe negative value,
            cout << x << endl;      // to prevent negative (x%mod+mod)%mod.
        }
    }
    return 0;
}
