// // Q: 
// #include<bits/stdc++.h>
// using namespace std;

// int farm[25][25];
// int vis[25][25];
// int flow[25], place[25];
// int k, s, c, cs = 0;
// int profit;
// int cal(int at, int f)
// {
//     if(at > k*k || at <= 0) return 0;
//     int i = (at/k);
//     if(at%k) i++;
//     int j;
//     if(at%k == 0) j = k;
//     else j = at%k;
//     i = i-(f-1), j = j-(f-1);
//     int prof = 0;
//     int p = 1;
//     while(p <= f+f)
//     {
//         int q = 1, x = j;
//         while(q <= f+f)
//         {
//             if(vis[i][x] == 0 && i >= 1 && i <= k &&  x >= 1 && x <= k)
//             {
//                 prof += farm[i][x];
//                 vis[i][x] = 1;
//             }
//             q++;x++;
//         }
//         p++; i++;
//     }
//     return prof;
// }
// void unvis(int at, int f)
// {
//     int i = (at / k);
//     if(at % k) i++;
//     int j;
//     if(at % k == 0) j = k;
//     else j = at % k;
//     i = i - (f - 1), j = j - (f - 1);
//     int p = 1;
//     while(p <= f + f)
//     {
//         int q = 1, x = j;
//         while(q <= f + f)
//         {
//             if(i >= 1 && i <= k && x >= 1 && x <= k)
//                 vis[i][x] = 0;
//             q++;x++;
//         }
//         p++; i++;
//     }
// }
// void travel(int at, int t, int prof)
// {
//     if(t == 0 || at == s+1)
//     {
//         profit = max(profit, prof);
//         return;
//     }
//     for(int i = 0; i <= min(t, flow[at]); i++)
//     {
//         int prf = cal(place[at], i);
//         travel(at+1, t-i, prf+prof);
//         unvis(place[at], i);
//     }
// }
// void solve()
// {
//     memset(vis, 0, sizeof(vis));
//     profit = 0;
//     cin >> k >> s >> c;
//     for(int i = 1; i <= s; i++) cin >> flow[i];
//     for(int i = 1; i <= s; i++) cin >> place[i];
//     for(int i = 1; i <= k; i++)
//         for(int j = 1; j <= k; j++) cin >> farm[i][j];
//     travel(1, c, 0);
//     cout << "Case " << cs << ": " << profit << '\n';
// }
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t; cin >> t;
//     while(t--)
//     {
//         cs++;
//        solve();
//     }
//     return 0;
// }