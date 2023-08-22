// Q: source 1: https://vjudge.net/problem/UVALive-6862
//    source 2: https://vjudge.net/problem/HackerRank-triples
// when it says (x,y,z) E N^3 it means (0,0,0) or (m,m,m) will be count as 3 elements, although they are same
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    while(cin >> m >> n)
    {
        int sum = 0;
        for(int x = 0; x <= m; x++)
            for(int y = x; y <= m; y++)
                for(int z = y; z <= m; z++)
                    if(x*x+y*y == z*z) sum++;
        //(0,0,0) will satisfy all values of j so we need to add it (n-2) times(j=2 to j=n)
        // with total iteration(x=y=z=0 to z=m) or (m+1)times.
        sum = sum+(n-2)*(m+1);
        cout << sum << endl;
    }
    return 0;
}
// Fermat's last theorem: https://en.wikipedia.org/wiki/Fermat's_Last_Theorem