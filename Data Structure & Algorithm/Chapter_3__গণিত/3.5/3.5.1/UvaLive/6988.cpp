// Q: source 1: https://vjudge.net/problem/UVALive-6988
//    source 2: https://www.codechef.com/problems/AMR14I?tab=solution
#include <bits/stdc++.h>
using namespace std;
int position(int current, int step, int n, int m)
{
    current += step;
    if (current <= m) return current;
    current -= m;
    return current%(n-m+1)+m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s, p, q;
        cin >> n >> m >> s >> p >> q;
        int virat = 1, rohit = 1, cnt = 0;
        for (int i = 1; i <= s; i++)
        {
            virat = position(virat, p, n, m);
            rohit = position(rohit, q, n, m);
            if (virat == rohit) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}