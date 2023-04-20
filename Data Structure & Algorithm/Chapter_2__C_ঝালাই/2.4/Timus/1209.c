// Q: https://acm.timus.ru/problem.aspx?space=1&num=1209
// Solution explained: https://binaryarchives.wordpress.com/2014/06/22/1-10-100-1000-1209-c/ 
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int k;
        scanf("%d", &k);
        if(sqrt(8.0*k - 7) == (int) sqrt(8.0*k-7))
            printf("%d ", 1);
        else  
            printf("%d ", 0);
    }   
    return 0;
}


