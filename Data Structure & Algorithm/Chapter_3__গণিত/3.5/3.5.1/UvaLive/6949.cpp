// Q: source 1: https://vjudge.net/problem/UVALive-6949
//    source 2: https://www.acmicpc.net/problem/10598
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int start[n], end[n];
    for(int i = 0;  i < n; i++)
        cin >> start[i] >> end[i];
    for(int i = 0; i < m; i++)
    {
        int u, v, t;
        cin >> u >> v >> t;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            int position;
            int range = end[i]-start[i];
            if((t/range)%2)
                position = end[i]-t%range;
            else
                position = start[i]+t%range;
            if(position >= u && position <= v) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}