// Q: https://acm.timus.ru/problem.aspx?space=1&num=1149
#include<bits/stdc++.h>
using namespace std;

string createA(int i, int n)
{
    if(i == n)
        return "sin(" + to_string(i) + ")";
    string sign;
    if(i%2 == 0) sign = "+";
    else sign = "-"; 
    return "sin(" + to_string(i) + sign + createA(i + 1, n) + ")";
}
string createS(int Ai, int Sj, int n)
{
    if(Sj == 1)
        return createA(1, Ai)+"+" + "1";
    return createA(1, Ai) + "+" + to_string(Sj) + ")" + createS(Ai + 1, Sj - 1, n);
}
int main()
{
    int n;
    cin >> n;
    string s;
    for(int i = 1; i < n; i++)
        s += '(';
    s += createS(1, n, n);
    cout << s;
    return 0;
}