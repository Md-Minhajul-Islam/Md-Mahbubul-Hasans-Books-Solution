// Q: source 1: https://vjudge.net/problem/UVALive-6847
//    source 2: https://vjudge.net/problem/UVA-12869
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l, h;
    while(cin >> l >> h)
    {
        if(l == 0 && h == 0) break;
        cout << (h/5)+1-(l/5) << endl;
    }
    return 0;
}