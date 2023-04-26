// Q: https://lightoj.com/problem/parity
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int cnt = 0;
        while(n)
        {
            n = n & (n-1);
            cnt++;
        }
        if(cnt % 2 == 0)
            printf("Case %d: even\n", i);
        else
            printf("Case %d: odd\n", i);
    }
    return 0;
}

// We used Brian Kernighan's Algorithm 

//  The algorithm suggests to keep doing & operation
//  with the integer's binary representation with it's
//  previous integer's binary representation until 
//  the binary representation becomes 0. 
//  The number of times of iteration it takes to reach 0 is the set bit count.