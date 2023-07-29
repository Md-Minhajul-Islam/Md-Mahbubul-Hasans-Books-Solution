// Q: 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float c = 0;
    for(int i = 1; i <= n; i++) // log10 (100) = 2
        c += log10(i);          // log(a*b) = log a + log b
    int count = floor(c) + 1;
    cout << count << endl;
    return 0;
}