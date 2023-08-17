// Q: source 1: https://vjudge.net/problem/UVALive-7035
//    source 2: https://vjudge.net/problem/Gym-100548A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int s;
        cin >> s;
        int flag = 1;
        while(s--)
        {
            int n;
            cin >> n;
            if(n%3 != 0) flag = 0;
        }
        cout << "Case #" << caseNo << ": ";
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}