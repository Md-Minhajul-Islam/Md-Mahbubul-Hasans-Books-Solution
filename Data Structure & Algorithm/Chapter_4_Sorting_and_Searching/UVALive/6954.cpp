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

double n, p, s, v;

double f(double c)
{
    return (n*pow(log2f(n), (c*sqrt(2))))/(1000000000.0*p)+(1.0+1.0/c)*(s/v);
}

void solve()
{
    cin >> n >> p >> s >> v;
    double l = 1, r = 100;
    while((r-l) > 1e-6)     // ternary search
    {
        double m1 = l+(r-l)/3.0;
        double m2 = r-(r-l)/3.0;
        if(f(m1) < f(m2)) r = m2;
        else l = m1;
    }
    double ans = f(l);
    printf("%lf %lf\n", ans, l);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    solve();
    return 0;
}