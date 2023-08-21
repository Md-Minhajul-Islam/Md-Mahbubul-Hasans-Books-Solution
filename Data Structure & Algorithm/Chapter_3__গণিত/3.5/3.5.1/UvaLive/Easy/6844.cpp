// Q: source 1: https://vjudge.net/problem/UVALive-6844
//    source 2: https://vjudge.net/problem/UVA-12866
#include<bits/stdc++.h>
using namespace std;
unsigned long long ans(long long x)
{
    if(x == 0) return 0;
    unsigned long long d = 1, a = 1;
    while(d*2 <= x)
    {
        a *= 3;
        d *= 2;
    }
    return a+2*ans(x-d);
}
int main()
{
    unsigned long long low, high;
    while(cin >> low >> high)
    {
        if(!low && !high) break;
        low++, high++;
        cout << ans(high)-ans(low-1) << endl;
    }
    return 0;
}