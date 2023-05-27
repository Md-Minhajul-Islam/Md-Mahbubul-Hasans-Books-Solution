// Q: https://lightoj.com/problem/hex-a-bonacci
#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long a, b, c, d, e, f, n;
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        long long hexafib[n+5];
        hexafib[0] = a, hexafib[1] = b, hexafib[2] = c, hexafib[3] = d, hexafib[4] = e, hexafib[5] = f;
        for(int j = 6; j <= n; j++)
            hexafib[j] = (hexafib[j-1]+hexafib[j-2]+hexafib[j-3]+hexafib[j-4]+hexafib[j-5]+hexafib[j-6])%10000007;
        printf("Case %d: %lld\n", i, hexafib[n] % 10000007);
    }
    return 0;
}