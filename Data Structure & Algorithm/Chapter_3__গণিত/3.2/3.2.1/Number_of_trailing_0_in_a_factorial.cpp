// Q: Find the number of zeros at the end of the factorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for(int i = 5; n/i != 0; i*=5)
        count += n/i;
    cout << count;
    return 0;
}