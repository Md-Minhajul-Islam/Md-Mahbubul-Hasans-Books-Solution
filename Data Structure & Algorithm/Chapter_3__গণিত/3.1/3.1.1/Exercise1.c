#include<stdio.h>
#include<math.h>
#include<string.h>

int sieve(int prime[], int limit)
{
    int mark[limit];
    memset(mark, 0, sizeof(mark));
    memset(prime, -1, sizeof(prime+limit));
    mark[0] = mark[1] = 1;      // 1 if not prime, 0 if prime.
    for(int i = 4; i <= limit; i+=2)
        mark[i] = 1;
    int nPrime = 0;
    prime[nPrime++] = 2;
    for(int i = 3; i <= limit; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            for(int j = i*i; j <= limit; j += i*2)  // j += i*2 = Suppose we have a number P and one of its multiple
                mark[j] = 1;                        // is A, then the next multiple is A+P, but we don't have  
        }                                           // to check for even numbers so we travers P+2P.
    }
    return nPrime;
}
int main()
{
    int n;
    scanf("%d", &n);

    int limit = sqrt(n*1.0)+2;  // "+2" = To avoid precision loss.
    int prime[limit];
    int nPrime = sieve(prime, limit);
    int power;
    int ans[nPrime][2];
    int j = 0;
    for(int i = 0; i < nPrime && prime[i]*prime[i] <= n; i++)
    {
        power = 1;
        if(n%prime[i] == 0)
        {
            ans[j][0] = prime[i];
            while(n%prime[i] == 0)
            {
                ans[j][1] = power++;
                n /= prime[i];
            }    
            j++;
        }
    }
    if(n != 1)
    {
        ans[j][0] = n;
        ans[j++][1] = 1;  
    }
    for(int i = 0; i < j; i++)
        printf("Number: %d, Power: %d\n", ans[i][0], ans[i][1]);
    return 0;
}