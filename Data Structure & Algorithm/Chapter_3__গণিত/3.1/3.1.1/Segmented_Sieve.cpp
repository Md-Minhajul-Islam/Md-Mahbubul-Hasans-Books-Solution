// Q: Segmented Sieve 
#include<bits/stdc++.h>
using namespace std;

vector<long long> prime;

void sieve(long long n)
{
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(long long i = 2; i <= n; i++)
    {
        if(isPrime[i])
        {
            prime.push_back(i);
            for(long long j = i*i; j <= n; j++)
                isPrime[j] = false;
        }
    }
}
int main()
{
    long long low, high;
    cin >> low >> high;
    
    //step 1: find prime 0 to root(high)
    long long root_high = sqrt(high*1.0);
    sieve(root_high);

    //step 2: take array of size (high-low+1) and mark nonprime inside the range
    vector<bool> isPrime(high-low+1, true);
    if(low == 1) isPrime[0] = false;
    for(long long p : prime)
    {
        // find (sm = smallest multiple of p in the range) 
        long long sm = (low/p)*p;
        if(sm < low) sm += p;
        // iterate and mark non prime in range. must shift the index
        for(long long i = sm; i <= high; i += p)
            isPrime[i-low] = false; 
        if(sm == p) isPrime[sm - low] = true;

    }

    // step 3: print the prime numbers from low to high
    for(long long i = 0; i < high-low+1; i++)
        if(isPrime[i] == true)
            cout << i+low << " ";

    return 0;
}