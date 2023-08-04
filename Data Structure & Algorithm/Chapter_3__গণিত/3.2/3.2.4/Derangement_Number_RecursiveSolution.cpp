// Q: Derangement Number using recursive function
#include<bits/stdc++.h>
using namespace std;
long long derangementNum(int n)
{
    if(n == 1 || n == 2) return n-1;
    return (n-1)*(derangementNum(n-1)+derangementNum(n-2));
}
int main()
{
    int n;
    while(cin >> n)
    cout << derangementNum(n) << endl;
    return 0;
}