// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

vii v;
string s;
bool f = 0;
bool vis[101];
void permutation(int i, int sz)
{
    if(f) return;
    if(i == sz + 1)
    {

        vii ans = v;
        sort(ans.begin(), ans.end());
        int flag = 1;
        for(int j = 0; j < ans.size(); j++)
        {
            if(ans[j] != j + 1) {
                flag = 0; break;
            }
        }
        if(flag)
        {
            f = 1;
            for(auto &x : v)
                cout << x << ' ';
        }
        return;
    }
    if(vis[s[i] - '0'] == 0)
    {
        vis[s[i] - '0'] = 1;
        v.pb(s[i] - '0');
        permutation(i + 1, sz);
        v.pop_back();
        vis[s[i] - '0'] = 0;
    }

    if(i + 1 <= sz)
    {
        int n = (s[i]-'0')*10+(s[i+1]-'0');
        if(vis[n] == 0)
        {
            vis[n] = 1;
            v.pb(n);
            permutation(i + 2, sz);
            v.pop_back();
            vis[n] = 0;
        }
    }
}

void solve()
{
    freopen("joke.in", "r", stdin);
    freopen("joke.out", "w", stdout);
    cin >> s;
    permutation(0, s.size()-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t; cin >> t;
    // while(t--)
    // {
    solve();
    // }
    return 0;
}