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
int cs = 0;
void solve()
{
    int k; cin >> k;
    ll a[k], b[k];
    for(int i = 0; i < k; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];
    sort(a, a+k); sort(b, b+k);
    ll tot = 0;
    for(int i = 0; i < k; i++)
        tot += abs(a[i]-b[i]);
    cout << "Case " << cs << ": ";
    cout << tot << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        cs++;
       solve();
    }
    return 0;
}