// Q: https://acm.timus.ru/problem.aspx?space=1&num=1086
//Sieve of Eratosthenes technique
//Though it is said that the input numbers will not exceed 15000,
//I think in test case 2 the input is a bigger number. 
// 1 if not prime, 0 if prime
#include<stdio.h>
#include<math.h>
int range = 164000;                     // 15000th prime number is 163841 so,
int prime[15000], nPrime, mark[164000]; // I just take 164000 as range

int main()
{   
    int limit = sqrt(range*1.0) + 2;    // added 2 to make sure the "limit" will
                                        // not smaller then exact sqrt(range)
    mark[0] = 1;    // 1 is not a prime number.
    for(int i = 4; i < range; i+=2) // All even numbers are non prime, except 2
        mark[i] = 1;
    prime[nPrime++] = 2;            // 2 is the 1st prime number
    for(int i = 3; i < range; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)  // i*i may be overflow
                for(int j = i*i; j < range; j += 2*i)  // why incresing by j += 2*i?
                    mark[j] = 1;                       // Let a number p and its first multiple a,
        }                                              // then its next multiple will be a+p, 
    }                                                  // we already assigned even numbers as non prime by (1)
    int k;                                             // so, we can now move by 2p (only odd) and assign as non prime
    scanf("%d", &k);
    while(k--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", prime[n-1]);
    }
    return 0;
}


