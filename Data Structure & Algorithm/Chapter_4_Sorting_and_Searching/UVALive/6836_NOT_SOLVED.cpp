// // Q: 
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef pair<int, int> pii;
// typedef vector<int> vii;
// typedef vector<ll> vll;
// typedef long double ld;
 
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair

// int m[55][55];
// int vis[55][55];
// vector<pii> dir({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});

// bool isValid(int i, int j)
// {
//     if(i >= 0 && i <= 52 && j >= 0 && j <= 52 && m[i][j])
//         return true;
//     else return false;
// }

// void run(int i, int j, int s)
// {
//     // if(m[i][j] != 1) return;
//     if(s == 0)
//     {
//         if(!vis[i][j])
//             cout << i << ' ' << j << '\n';
//         vis[i][j] = 1;
//         return;
//     }
//     for(auto &x: dir)
//     {
//         int u = x.first, v = x.second;
//         if(isValid(i+u, j+v))
//         {
//             run(i+u, j+v, s-1);
//         }
//     }
// }

// void solve()
// {
//     int n, x, y, t;
//     cin >> n >> x >> y >> t;
//     while(n--)
//     {
//         int a, b, c, d; 
//         cin >> a >> b >> c >> d;
//         if(a == c)
//         {
//             for(int i = min(b, d); i <= max(b, d); i++)
//                 m[a][i] = 1;
//         }
//         else
//         {
//             for(int i = min(a, c); i <= max(a, c); i++)
//                 m[i][b] = 1;
//         }
//     }
//     int tot = 0;
//     while(t--)
//     {
//         int tt; char c;
//         cin >> tt >> c;
//         tot += tt;
//     }
//     run(x, y, tot);
//     // for(int i = 0; i < 55; i++)
//     // {
//     //     for(int j = 0; j < 55; j++) cout << m[i][j];
//     //     cout << '\n';
//     // }
// }
 
// int main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);
//     // cout.tie(NULL);
 
//     // int t; cin >> t;
//     // while(t--)
//     // {
//        solve();
//     // }
//     return 0;
// }