// Q: source 1: https://vjudge.net/problem/UVALive-6858
//    source 2: https://vjudge.net/problem/HackerRank-frame
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int t, q;
    cin >> t;
    while(t--)
    {
        cin >> q;
        if(q < 1) cout << "NO\n";
        else if(q == 2 || ((x-2)%q == 0 && y%q == 0) || (x%q == 0 && (y-2)%q == 0) || ((x-1)%q == 0 && (y-1)%q == 0))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}