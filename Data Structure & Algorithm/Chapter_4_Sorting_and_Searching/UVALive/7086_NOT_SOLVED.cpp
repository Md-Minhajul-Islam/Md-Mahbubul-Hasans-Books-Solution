// Q: 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> v;
int d, r, m;
int cs = 0;
void track(int i)
{
    if(i == m) return;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == -1) continue;
        // v[i] += 1;
        if((v[i] == 0 || v[i] > r) && v[i] < d) v[i] += 1;
        else if(v[i] >= 1 && v[i] <= r && v[i] < d)
        {
            v[i] += 1; cnt++;
        }
        if(v[i] == d) v[i] = -1;
    }
    while(cnt--) v.pb(0);
    track(i+1);
}

void solve()
{
    v.clear();
    cin >> d >> r >> m;
    v.pb(0);
    track(1);
    int n = 0;
    for(int i = 0; i < v.size(); i++) if(v[i] != -1) n++;
    cout << "Case #" << cs <<": " <<n << '\n';
}
 
int main()
{ 
    int t; cin >> t;
    while(t--)
    {
        cs++;
       solve();
    }
    return 0;
}