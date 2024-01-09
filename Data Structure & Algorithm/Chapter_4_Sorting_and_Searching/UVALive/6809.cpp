// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
typedef unsigned int ui;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
int cs = 0;

void solve()
{
    ui a, b;
    scanf("%x %x", &a, &b);
    ui x = a, y = a;
    int l = 0, r = 0;
    while(x != b && l < 32)
    {
        x = (x<<1)|(x>>31);
        l++;
    }
    while(y != b && r < 32)
    {
        y = (y>>1)|(y<<31);
        r++;
    }
    cout << "Case #" << cs << ": ";
    if(l == 32) cout << "Not possible\n";
    else if(l == r) cout << l << " Any\n";
    else if(l < r) cout << l << " Left\n";
    else cout << r << " Right\n";
}
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        cs++;
       solve();
    }
    return 0;
}