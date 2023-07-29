// Q: Find the number of given prime in the factorial
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, prime;
    cin >> number >> prime;
    int count = 0;
    for (int i = prime; number/i != 0; i *= prime)
        count += number / i;
    cout << count;
    return 0;
}