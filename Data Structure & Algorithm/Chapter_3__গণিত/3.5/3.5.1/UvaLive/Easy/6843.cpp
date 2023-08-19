// Q: source 1: https://vjudge.net/problem/UVALive-6843
//    source 2: https://vjudge.net/problem/UVA-12865
#include<bits/stdc++.h>
using namespace std;
const int N = 900000001;
bitset<N> visited;
int ans[30003];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    ans[1] = 2;
    for(int i = 2; i <= 30000; i++){
        for (int j = 1; j <= i; j++){
            if (visited[i*j]) continue;
            visited[i*j] = 1;
            ans[i]++;
        }
        ans[i] += ans[i-1];
    }
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}