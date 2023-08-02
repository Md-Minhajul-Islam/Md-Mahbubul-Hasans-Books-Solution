// Q: nCr using Lucas Theorem

#include<bits/stdc++.h>
using namespace std;
int nCrdp(int n, int r, int m)
{
    // nCr Technique1
    if (n < r) return 0;
    if ((n - r) < r) r = n - r;
    int dp[r + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
            dp[j] = (dp[j] + dp[j - 1]) % m;
    }
    return dp[r];
}
int nCrLucas(int n, int r, int m)
{
    if(r == 0) return 1;
    // Compute last digits of n and r in base p
    int ni = n%m;
    int ri = r%m;
    return nCrLucas(n/m, r/m, m)*nCrdp(ni, ri, m)%m;
}
int main()
{
    int n, r, mod;
    cin >> n >> r >> mod;
    cout << nCrLucas(n, r, mod);
    return 0;
}
// Reference:
// https://www.geeksforgeeks.org/compute-ncrp-using-lucas-theorem/
// https://www.hackerearth.com/practice/notes/ncr-mod-mod-lucas-theorem/