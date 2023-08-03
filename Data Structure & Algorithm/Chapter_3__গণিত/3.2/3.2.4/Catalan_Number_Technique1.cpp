// Q: Catalin Number using formula C = 2n!/(n+1)!n!
#include<bits/stdc++.h>
using namespace std;
int nCr(int n, int r)
{
    vector<int> nArr, rArr;
    for (int i = n; i > r + 1; i--)
        nArr.push_back(i);
    for (int i = r; i > 0; i--)
        rArr.push_back(i);
    for (int i = 0; i < rArr.size(); i++)
    {
        for (int j = 0; j < nArr.size(); j++)
        {
            if (rArr[i] == 1) break;
            int gcd = __gcd(rArr[i], nArr[j]);
            if (gcd != 1)
            {
                rArr[i] /= gcd;
                nArr[j] /= gcd;
            }
        }
    }
    int ans = 1;
    for (int i = 0; i < nArr.size(); i++)
        ans *= nArr[i];
    return ans; 
}
int catalanNum(int n)
{
    int r = n;
    n = 2*n;
    return nCr(n, r);
}
int main()
{
    int n;
    while(cin >> n)
    {
        cout << catalanNum(n) << endl;
    }
    return 0;
}
