// Q: https://lightoj.com/problem/secret-origins
#include <bits/stdc++.h>
using namespace std;
string dec_to_bin(int n)
{
    string bin = "";
    for (int i = 31; i >= 0; i--)
    {
        int k = 1 << i;
        bin += (n & k) ? '1' : '0';
    }
    return bin;
}
int bin_to_dec(string s)
{
    int dec = 0;
    for (int i = 0; i <= 31; i++)
        dec = (2 * dec) + s[i] - '0';
    return dec;
}
int main()
{
    int t;
    cin >> t;
    for (int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n;
        cin >> n;
        string bin = dec_to_bin(n);
        next_permutation(bin.begin(), bin.end());
        cout << "Case " << caseNo << ": " << bin_to_dec(bin) << endl;
    }
    return 0;
}