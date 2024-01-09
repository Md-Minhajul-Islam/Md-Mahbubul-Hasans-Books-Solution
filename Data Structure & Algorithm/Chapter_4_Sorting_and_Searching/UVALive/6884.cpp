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
int n;
bool mark[30], book[12];
int  val[30];
vii ch;
string a[15];
int ans;
bool isValid()
{
    for(int i = 1; i <= n; i++)
    {
        if(val[a[i][0] - 'A' + 1] == 0) return false;
    }
    int sum1 = 0;
    for(int i = 1; i < n; i++)
    {
        int sum = 0, f = 1;
        for(int j = a[i].size() - 1; j >= 0; j--)
        {
            sum += val[a[i][j] - 'A' + 1] * f;
            f *= 10;
        }
        sum1 += sum;
    }
    int sum2 = 0, f = 1;
    for(int i = a[n].size() - 1; i >= 0; i--)
    {
        sum2 += val[a[n][i] - 'A' + 1] * f;
        f *= 10;
    }
    if(sum1 == sum2) return true;
    else return false;

}
void backtrack(int at)
{
    if(at == ch.size())
    {
        if(isValid())
        {
            ans += 1;
        }
        return;
    }
    for(int i = 0; i <= 9; i++)
    {
        if(!book[i])
        {
            book[i] = true;
            val[ch[at]] = i;
            backtrack(at + 1);
            book[i] = false;
            val[ch[at]] = 0;
        }
    }
}

void clear()
{
    memset(mark, 0, sizeof(mark));
    memset(book, 0, sizeof(book));
    memset(val, 0, sizeof(val));
    ch.clear();
    ans = 0;
}

void solve()
{

    while(cin >> n)
    {
        clear();
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            for(int j = 0; j < a[i].size(); j++)
                mark[a[i][j] - 'A' + 1] = true;
        }
        for(int i = 0; i < 30; i++)
        {
            if(mark[i]) ch.pb(i);
        }
        backtrack(0);
        cout << ans <<  '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    // int t; cin >> t;
    // while(t--)
    // {
    solve();
    // }
    return 0;
}