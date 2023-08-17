// Q: source 1: https://vjudge.net/problem/UVALive-6982
//    source 2: https://www.codechef.com/problems/AMR14C?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int modArr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> modArr[i];
            modArr[i] %= m;
        }
        sort(modArr, modArr+n);
        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += upper_bound(modArr, modArr+n, x-modArr[i])-modArr;       //modArr[i] & other numbers which total is less than or equal to x
            ans += upper_bound(modArr, modArr + n, m+x-modArr[i])-modArr;   // modArr[i] & other numbers which total is greater than m & after mod it will smaller than or equal to x
            ans -= upper_bound(modArr, modArr + n, (m-1)-modArr[i])-modArr; // modArr[i] & other numbers which total is greater than x & smaller than or equal to m-1
        }
        cout << ans << endl;
    }
    return 0;
}