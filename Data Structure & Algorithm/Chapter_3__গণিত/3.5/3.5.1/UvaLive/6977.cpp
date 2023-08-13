// Q: source 1: https://vjudge.net/problem/UVALive-6977
//    source 2: https://codeforces.com/gym/100554/problem/I
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        double ans = 0;
        while(n--)
        {
            double x;
            cin >> x;
            x = 1.0*x/100;
            if(x == 0) continue;
            if(s == "bit")  ans += x*log2(x);
            else if(s == "nat") ans += x*log(x);
            else if(s == "dit") ans += x*log10(x);
        }
        ans *= -1;
        printf("%.12lf\n", ans);
    }
    return 0;
}