// Q: source 1: https://vjudge.net/problem/UVALive-6929
//    source 2: https://vjudge.net/problem/Kattis-consecutivesums
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool powerOfTwo(ll n)
{
    while(n%2 == 0) n/=2;
    return n==1;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n <= 1 || powerOfTwo(n))
            cout << "IMPOSSIBLE\n";
        else if(n%2)
            cout << n <<" = "<< n/2 <<" + "<< n/2+1 <<"\n";
        else
        {
            ll lim = sqrt(2.0*n);
            ll firstNum = -1, lastNum = -1;
            for(ll k = 2; k <= lim; k++)
            {
                ll x = (n/k - (k-1)/2);
                if(x == n) continue;
                if(k*(x+x+k-1)/2 == n)
                {
                    firstNum = x, lastNum = x+k-1;
                    break;
                }
            }

            if(firstNum != -1)
            {
                cout << n << " = ";
                for(ll i = firstNum; i < lastNum; i++)
                    cout << i << " + ";
                cout << lastNum << "\n";
            }
            else cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}
/*
Assume k consecutive numbers:
if we have total k terms, and assuming first number as x
x + (x+1) + (x+2)+...(x+k-1) = N,
k*(x+ x+k-1)/2 = N
k*(2x+k-1) = 2N
2xk + k*(k-1) = 2N
xk = N- k*(k-1)/2
x = N/k - k*(k-1)/2k
x = N/k - (k-1)/2
so, firstNum = x, lastNum = x+k-1

Now what is the limit of the loop?
from line 3,
=> k*(2x+k-1) = 2N
As we know x is positive number, so x>=1
=> 2N-k^2 = k(2x-1)>0
=> 2N>k^2
so k is limited to k<sqrt(2*N).
*/