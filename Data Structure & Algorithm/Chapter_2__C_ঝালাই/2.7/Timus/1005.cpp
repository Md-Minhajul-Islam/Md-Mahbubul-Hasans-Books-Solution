// Q: https://acm.timus.ru/problem.aspx?space=1&num=1005

// 1. Generate all the subsets(combinations).
// 2. Comapre the sum of a subset with remaining elements sum.
// 3. Store the minimum difference as answer.

#include<bits/stdc++.h>
using namespace std;

int weight[22];
int n, ans, sum = 0;

void subsets(int i, int s)
{
    if(i == n)
    {
        ans = min(ans, abs(sum-2*s));  // (sum-s - s)
        return;
    }
    subsets(i+1, s);
    subsets(i+1, s+weight[i]);
}
int main()
{
    cin >> n;    
    for(int i = 0; i < n; i++)
    {
        cin >> weight[i];
        sum += weight[i];
    }
    ans = sum;
    subsets(0, 0);
    cout << ans;
    return 0;
}