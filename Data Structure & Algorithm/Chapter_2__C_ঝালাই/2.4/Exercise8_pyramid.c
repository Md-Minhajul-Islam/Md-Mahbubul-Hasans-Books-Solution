#include<stdio.h>
int main()
{   
    int n;
    scanf("%d", &n);

    //1
    for(int i=1; i<=n; i++)
    { 
        for(int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
    printf("\n");

    //2
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("*");
        printf("\n");
    }
    printf("\n");

    //3
    int l = 1, s = n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
            printf(" ");
        for(int k=1; k<=l; k++)
            printf("*");
        printf("\n");
        l += 2, s--;
    }
    printf("\n");

    //4
    l = 0, s = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
            printf(" ");
        for(int k=1; k<n-l; k++)
            printf("%d", k);
        for(int m=n-l; m>=1; m--)
            printf("%d", m);
        printf("\n");

        l++, s++;
    }
    printf("\n");

    //5
    l = 1, s = n-1;
    for(int i = 1; i<=2*n-1; i++)
    {
        for(int j = 1; j <= s; j++)
            printf(" ");
        for(int k = 1; k <= l; k++)
            printf("*");
        printf("\n");
        if(i < n)
            l += 2, s--;
        else
            l -= 2, s++;
    }
    printf("\n");

    //6
    l = n-1, s = n-1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=s; j++)
            printf(" ");
        for(int k=1; k<n-l; k++)
            printf("%d", k);
        for(int m=n-l; m>=1; m--)
            printf("%d", m);
        printf("\n");
        if(i < n)
            l--, s--;
        else
            l++, s++;
    }
    printf("\n");

    return 0;
}

