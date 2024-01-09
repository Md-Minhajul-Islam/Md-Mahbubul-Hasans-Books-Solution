// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<string, pair<int, int>> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair

int t, p, s;
int prob[20][160];
bool check()
{
    int team[160] = {0};
    for(int i = 1; i <= p; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= t; j++)
        {
            if(prob[i][j]) team[j]++, cnt++;
        }
        if(cnt == 0 || cnt == t)  return 0;
    }
    for(int i = 1; i <= t; i++) if(team[i] == 0 || team[i] == p) return 0;
    return 1;
}
void solve()
{
    while(cin >> t >> p >> s)
    {
        if(t == 0 && p == 0 && s == 0) return;
        memset(prob, 0,  sizeof(prob));
        priority_queue<pii, vector<pii>, greater<pii>> q;
        while(s--)
        {
            int tt; char pp; string time, res;
            cin >> tt >> pp >> time >> res;
            
            if(res == "No")
            {
                string temp;
                getline(cin, temp);
                continue;
            }
            q.push({time, {tt, (pp-'A'+1)}});
        }
        string t1 = "--:--:--", t2 = "--:--:--";
        bool f1 = 0, f2 = 0;
        while(!q.empty())
        {
            prob[q.top().se.se][q.top().se.fi] = 1;
            if(f1 == 0 && check()) t1 = q.top().fi, f1 = 1;
            else if(f1 && f2 == 0 && !check()) t2 = q.top().fi, f2 = 1;
            q.pop(); 
        }
        cout << t1 <<  ' ' << t2 <<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}