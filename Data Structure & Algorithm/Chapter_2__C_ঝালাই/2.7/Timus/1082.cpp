// Q: https://acm.timus.ru/problem.aspx?space=1&num=1082
// This problem made me laugh!
// When you observe the output of the given code in the question
// by taking n numbers, you will see that if we input n sorted numbers
// it prints "Vasilisa the Beautiful\n".
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cout << i << " ";
    return 0;
}