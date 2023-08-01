// Q: nCr using array
/*
1. take values in n_Arr from n to max(r, n-r)
2. take values in r_Arr from min(r, n-r) to 1   // cause, the same values from up and down always cut each other
3. multiply smallest number of nArr with ans
4. divide ans by smallest number of rArr
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;
    if (r > n)
        return 0;
    vector<long long> nArr, rArr;
    for (long long i = n; i > max(r, n - r); i--)
        nArr.push_back(i);
    for (long long i = min(r, n - r); i > 0; i--)
        rArr.push_back(i);
    long long ans = 1;
    for(int i = rArr.size()-1, j = nArr.size()-1; i >= 0; i--, j--)
    {
        ans *= nArr[j];
        ans /= rArr[i];
    }
    cout << ans << endl;    
    return 0;
}