// Q: 
#include<bits/stdc++.h>
using namespace std;

int used[25], number[25];

void permu(int at, int n)
{
    if(at == n+1)
    {
        for(int i = 1; i <= n; i++) cout << number[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!used[i])
        {
            used[i] = 1;
            number[at] = i;
            permu(at+1, n);
            used[i] = 0;
        }
    }
}

int main()
{
    int n; cin >> n;
    permu(1, n);
    return 0;
}