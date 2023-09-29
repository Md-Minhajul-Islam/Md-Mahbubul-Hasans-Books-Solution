// Q: https://vjudge.net/problem/UVALive-6969
// Q: https://codeforces.com/gym/100554/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m; int a[n], b[m];
        double avg_a = 0, avg_b = 0;
        for(int i = 0; i < n-1; i++)
        {
            cin >> a[i]; avg_a += a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i]; avg_b += b[i];
        }
        if(abs((avg_a/(n-1)) - (floor)(avg_a/(n-1))) < 1e-9)
            avg_a = avg_a/(n-1)-1;
        else avg_a = floor(avg_a/(n-1));
        if(abs((avg_b/m) - floor(avg_b/m)) < 1e-9)
            avg_b = avg_b/m+1;
        else avg_b = ceil(avg_b/m);
        cout << min(avg_a, avg_b) <<" " << max(avg_a, avg_b) << "\n";
    }
    return 0;
}