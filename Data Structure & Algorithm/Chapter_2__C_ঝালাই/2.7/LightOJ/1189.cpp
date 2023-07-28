// Q: https://lightoj.com/problem/sum-of-factorials
#include <bits/stdc++.h>
using namespace std;
long long fact_arr[20];
void calculateFact()
{
    fact_arr[0] = 1;
    for (int i = 1; i < 20; i++)
        fact_arr[i] = fact_arr[i - 1] * i;
}
int main()
{
    calculateFact();
    int t;
    cin >> t;
    for (int caseNo = 1; caseNo <= t; caseNo++)
    {
        long long n;
        cin >> n;
        vector<int> answer;
        for (int i = 19; i >= 0; i--)
        {
            if (fact_arr[i] <= n)
            {
                n -= fact_arr[i];
                answer.push_back(i);
            }
        }
        cout << "Case " << caseNo << ": ";
        if (n == 0)
        {
            for (int i = answer.size() - 1; i > 0; i--)
                cout << answer[i] << "!+";
            cout << answer[0] << "!\n";
        }
        else
            cout << "impossible\n";
    }
    return 0;
}