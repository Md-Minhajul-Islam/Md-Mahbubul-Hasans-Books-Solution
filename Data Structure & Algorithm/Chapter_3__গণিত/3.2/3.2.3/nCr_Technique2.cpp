// Q: nCr using array
/*
1. take values in n_Arr from n to max(r, n-r)
2. take values in r_Arr from min(r, n-r) to 1   // cause, the same values from up and down always cut each other
3. take one number from r_Arr and cut the numbers of n_Arr untill the number of r_Arr will become 1.
4. ans is the multiplication of the numbers in n_Arr
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;
    if(r > n) return 0;
    vector<long long> nArr, rArr;
    for(long long i = n; i > max(r, n-r); i--)
        nArr.push_back(i);
    for(long long i = min(r, n-r); i > 0; i--)
        rArr.push_back(i);
    for(int i = 0; i < rArr.size(); i++)
    {
        for(int j = 0; j < nArr.size(); j++)
        {
            if(rArr[i] == 1) break;
            int gcd = __gcd(rArr[i], nArr[j]);
            if(gcd != 1)
            {
                rArr[i] /= gcd;
                nArr[j] /= gcd;
            }
        }
    }
    long long ans = 1;
    for(int i = 0; i < nArr.size(); i++)
        ans *= nArr[i];
    cout << ans << endl;
    return 0;
}