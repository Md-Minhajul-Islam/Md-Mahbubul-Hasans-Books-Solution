// Q: source 1: https://vjudge.net/problem/UVALive-6823
//    source 2: https://www.beecrowd.com.br/judge/en/problems/view/1745
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int trac = 0;
    long long ans = 0;
    int rem[3] = {1, 0, 0};
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            trac = (trac + s[i] - '0') % 3;
            ans += rem[trac];
            rem[trac]++;
        }
        else
        {
            trac = 0;
            rem[0] = 1, rem[1] = 0, rem[2] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}