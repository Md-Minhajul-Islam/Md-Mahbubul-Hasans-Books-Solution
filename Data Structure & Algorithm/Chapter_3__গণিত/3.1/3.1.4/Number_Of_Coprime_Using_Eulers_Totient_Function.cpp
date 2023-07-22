// Q: Find the number of comprime of n (from 1-n), using [Euler's Totient Function-phi(n)]
#include<bits/stdc++.h>
using namespace std;

int numberOfCoprime(int n)
{
    int ans = n;
    //prime factorization
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                n /= i;
            }
            ans -= ans/i; //same as: ans*(1-1/p)
        }
    }
    if(n > 1)
    {
        //there can be only one prime greater
        //than sqrt(n) that divides n
        ans -= ans/n;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << numberOfCoprime(n);
    return 0;
}

/* phi(n) = n এর থেকে ছোট বা সমান এমন কতগুলো সংখ্যা আছে যা n এর সঙ্গে সহমৌলিক 
   phi(n) = n (1-1/p1) (1-1/p2) ... (1-1/pk)        // p1, p2, ..., pk are the prime factors of n
*/