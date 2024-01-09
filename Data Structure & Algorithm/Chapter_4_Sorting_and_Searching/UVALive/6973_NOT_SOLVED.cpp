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
// int m[520][520];
// int n, cnt;
// void travel(int i, int j, int s)
// {
//     // cout << i << ',' << j << '-' << cnt <<  '\n';
//     if(cnt > s) return;
//     if(cnt == s)
//     {
//         m[i][j] = cnt; return;
//     }
//     m[i][j] = cnt;
//     if(i == n)
//     {
//         for(int k = 1; k <= n; k++, cnt++) m[i][k] = cnt;
//         travel(i-1, n, s);
//     }
//     else if(i%2 == j%2)
//     {
//         cnt++;
//         if(i+1 <= n && m[i+1][j] == 0) travel(i+1, j, s);
//         else if(i-1 >= 1 && m[i-1][j] == 0) travel(i-1, j, s);
//         else if(j+1 <= n && m[i][j+1] == 0) travel(i, j+1, s);
//         else if(j-1 >= 1 && m[i][j-1] == 0) travel(i, j-1, s);
//     }
//     else if(i%2 == 0 && j%2 == 1)
//     {
//         cnt++;
//         travel(i, j + 1, s);
//     }
//     else 
//     {
//         cnt++;
//         travel(i, j - 1, s);
//     }


// }

// void solve()
// {
//     memset(m, 0, sizeof(m));
//     cnt = 1;
//     cin >> n;
//     // if(n%2 == 0)
//     // {
//         travel(1, 2, n*n);
//     // }
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++) cout << m[i][j] << ' ';
//         cout << '\n';
//     }
// }
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
 
//     int t; cin >> t;
//     while(t--)
//     {
//        solve();
//     }
//     return 0;
// }