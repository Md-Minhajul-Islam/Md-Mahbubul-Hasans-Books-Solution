// Q: n ও r দেওয়া আছে, তোমাকে nCr = n!/(r! *(n-r)!) প্রিন্ট করতে হবে 
#include<stdio.h>
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int n_fact = 1, r_fact = 1, n_r_fact = 1;

    for(int i = n; i > 0; i--)      //can calculate at max 12!
    {                               //use bigger data type for more
        n_fact *= i;
        if(i <= r)
            r_fact *= i;
        if(i <= n-r)
            n_r_fact *= i;
    }
    int nCr = n_fact/(r_fact*n_r_fact);
    printf("%d\n", nCr);
    return 0;
}


