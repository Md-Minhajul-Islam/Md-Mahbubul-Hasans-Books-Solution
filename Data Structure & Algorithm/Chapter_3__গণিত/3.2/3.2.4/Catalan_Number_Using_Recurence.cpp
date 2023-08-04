// Q: Find Catalan Number using recurence method C = C0 Cn-1 + C1 Cn-2 +....+ Cn-1 C0
#include<bits/stdc++.h>
using namespace std;
long long catalanNum(int n)
{
    if(n <= 1)
    return 1;
    int res = 0;
    for(int i = 0; i < n; i++)
        res += catalanNum(i)*catalanNum(n-i-1);
    return res;
}
int main()
{
    int n;
    while(cin >> n)
    cout << catalanNum(n) << endl;
    return 0;
}