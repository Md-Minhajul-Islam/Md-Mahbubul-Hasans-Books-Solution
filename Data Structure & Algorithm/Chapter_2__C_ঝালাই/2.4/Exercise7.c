// Q: 1*n + 2*(n-1)+ ... + n*1;

#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i*(n-(i-1));
    printf("%d\n", sum);

    //formula = n*(n*n + 3*n + 2)/6; //For explanation check pdf
    return 0;
}

