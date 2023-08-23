// Q: source 1: https://vjudge.net/problem/UVALive-6918
//    source 2: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4763
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        long long a, b;
        cin >> a >> b;
        long long count = 0, ans_or, ans_and, mask = 1;
        while(a!=b)
        {
            a>>=1;
            b>>=1;
            count++;
        }
        a <<= count;
        ans_and = a, ans_or = a;
        while(count--)
        {
            ans_or |= mask;
            mask<<=1;
        }
        cout <<"Case " << caseNo << ": " << ans_or <<" " << ans_and <<"\n";
    }
    return 0;
}
// https://www.youtube.com/watch?v=-qrpJykY2gE