// Q: 
#include<bits/stdc++.h>
using namespace std;

int number[20];
int n, k;

void combina(int at, int last)
{
    if(at == k+1)
    {
        for(int i = 1; i <= k; i++) cout << number[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = last+1; i <= n-k+at; i++)   // k-at <= n-i
    {                                     // i <= n-k+at
        number[at] = i;
        combina(at+1, i);
    }
} 
int main()
{
    cin >> n >> k;
    combina(1, 0);
    return 0;
}