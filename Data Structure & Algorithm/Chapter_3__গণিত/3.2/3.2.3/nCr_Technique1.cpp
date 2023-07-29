// Q: Calculating nCr using array
// T = O(n*r)
// S = O(r)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;
    if(n < r) return 0;
    if((n-r)<r) r = n-r;
    int dp[r+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = min(i, r); j > 0; j--)
            dp[j] = (dp[j] + dp[j - 1]) % 1000000007;
    }    
    cout << dp[r] << endl;
    return 0;
}
// Reference: https://www.youtube.com/watch?v=jIb1W3ObIho