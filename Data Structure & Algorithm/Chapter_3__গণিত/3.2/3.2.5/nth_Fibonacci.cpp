// Q: Find nth Fibonacci using Matrix Exponential
#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
void matrixMul(long long a[][2], long long b[][2])
{
    long long temp[2][2];
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            temp[i][j] = 0;
            for(int k = 0; k < 2; k++)
            {
                long long x = (a[i][k] * b[k][j]) % m;
                temp[i][j] = (temp[i][j] + x) % m;
            }
        }
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            a[i][j] = temp[i][j];
}
long long nthFib(long long power)
{
    long long base[2][2];
    base[0][0] = base[0][1] = base[1][0] = 1;
    base[1][1] = 0;
    long long ans[2][2];
    ans[0][0] = ans[1][1] = 1;
    ans[0][1] = ans[1][0] = 0;
    while(power)
    {
        if(power%2 == 0)
        {
            matrixMul(base, base);
            power /= 2;
        }
        else
        {
            matrixMul(ans, base);
            power--;
        }
    }
    return ans[0][0];
}
int main()
{
    long long n;
    while(cin >> n)
    {
        if (n == 0 || n == 1)
            cout << n << endl;
        else
            cout << nthFib(n-1) << endl;
    }
    return 0;
}

/*
    |Fn  | = |1 1|^n-1 |F1|
    |Fn-1|   |1 0|     |F0|
*/