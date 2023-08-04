// Q: Find the Derangement Number 
// Formula D = (n-1)* {D(n-2) + D(n-1)}
#include<bits/stdc++.h>
using namespace std;
long long deRangement(int n)
{
    if(n == 1 || n == 2)
        return n-1;
    long long a = 0, b = 1;
    for(int i = 3; i <= n; i++)
    {
        long long curr = (i - 1) * (a + b);
        a = b;
        b = curr;
    }
    return b;
}
int main()
{
    int n;
    cin >> n;
    cout << deRangement(n);
    return 0;
}
// Reference: https://www.geeksforgeeks.org/count-derangements-permutation-such-that-no-element-appears-in-its-original-position/