// Q: 
#include<bits/stdc++.h>
using namespace std;

int queen[20];
int column[20], diagonal1[40], diagonal2[40];

void nqueen(int at, int n)
{
    if(at == n+1)
    {
        cout << "(row, column) = ";
        for(int i = 1; i <= n; i++) printf("(%d, %d) ", i, queen[i]);
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(column[i] || diagonal1[i+at] || diagonal2[n+i-at]) continue;
        queen[at] = i;
        column[i] = diagonal1[i+at] = diagonal2[n+i-at] = 1;
        nqueen(at+1, n);
        column[i] = diagonal1[i+at] = diagonal2[n+i-at] = 0; 
    }
}

void solve()
{
    int n; cin >> n;
    nqueen(1, n);    
}
 
int main()
{
    solve();
    return 0;
}