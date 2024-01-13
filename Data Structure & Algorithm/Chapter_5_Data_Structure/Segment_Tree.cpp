// Q: Segment Tree for range sum
#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
int sum[N];
int a[10000];

void build(int at, int L, int R)
{
    if(L == R) 
    {
        sum[at] = a[L]; return;
    }

    int mid = (L+R)/2;
    build(at*2, L, mid);
    build(at*2+1, mid+1, R);
    sum[at] = sum[at*2] + sum[at*2+1];
}
void update(int at, int L, int R, int pos, int val)
{
    if(L == R)
    {
        sum[at] += val; return;
    }
    int mid = (L+R)/2;
    if(pos <= mid) update(at*2, L, mid, pos, val);
    else update(at*2+1, mid+1, R, pos, val);

    sum[at] = sum[at*2]+sum[at*2+1];
}
int query(int at, int L, int R, int l, int r)
{
    if(r < L || R < l) return 0;
    if(l <= L && r >= R) return sum[at];

    int mid = (L+R)/2;
    int x = query(at*2, L, mid, l, r);
    int y = query(at*2+1, mid+1, R, l, r);
    return x+y;
}
void solve()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    while(q--)
    {
        int f; cin >> f;
        if(f == 1)
        {
            int pos, val; cin >> pos >> val;
            update(1, 1, n, pos, val);
        }
        else
        {
            int l, r; cin >> l >> r;
            int x = query(1, 1, n, l, r);
            cout << x <<'\n';
        }
    }
}
int main()
{
    solve();
    return 0;
}