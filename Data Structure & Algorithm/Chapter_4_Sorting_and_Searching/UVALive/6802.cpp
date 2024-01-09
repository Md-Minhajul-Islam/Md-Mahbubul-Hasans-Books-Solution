// Q: 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
int cs = 0;
int turtle[66][66];
void solve()
{
    int x, y; cin >> x >> y;
    string s; cin >> s;
    char state = 'u';
    memset(turtle, 0, sizeof(turtle));
    turtle[x][y] = 1;
    int n = 0;
    for(int i =  0; i < s.size(); i++)
    {
        if(s[i] == 'F')
        {
            if(state == 'u') y++;
            else if(state == 'd') y--;
            else if(state == 'l') x--;
            else x++;
            if(turtle[x][y] == 0) turtle[x][y] = 1;
            else if(turtle[x][y] == 1)
            {
                n++; turtle[x][y] = -1;
            }
        }
        else if(s[i] == 'R')
        {
            if(state == 'u') state = 'r';
            else if(state == 'd') state = 'l';
            else if(state == 'r') state = 'd';
            else state = 'u';
        }
        else
        {
            if(state == 'u') state = 'l';
            else if(state == 'd') state = 'r';
            else if(state == 'r') state = 'u';
            else state = 'd';
        }  
    }
    cout << "Case #" << cs <<": ";
    cout << x << ' ' << y << ' ' << n << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
    while(t--)
    {
        cs++;
       solve();
    }
    return 0;
}