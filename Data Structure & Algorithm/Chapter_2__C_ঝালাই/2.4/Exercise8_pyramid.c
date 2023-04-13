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
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("*");
        for(int l=1; l<i; l++)
            printf("*");
        printf("\n");
    }
    printf("\n");

    //4
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("%d", k);
        for(int l=i-1; l>0; l--)
            printf("%d", l);
        printf("\n");        
    }
    printf("\n");

    //5
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j <= n-i; j++)
            printf(" ");
        for(int k = 1; k <= i; k++)
            printf("*");
        for(int l = 1; l < i; l++)
            printf("*");
        printf("\n");
    }
    for(int i=n-1; i>0; i--)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("*");
        for(int l=i-1; l>0; l--)
            printf("*");
        printf("\n");
    }
    printf("\n");

    //6
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("%d", k);
        for(int l=i-1; l>0; l--)
            printf("%d", l);
        printf("\n");
    }
    for(int i=n-1; i>0; i--)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("%d", k);
        for(int l=i-1; l>0; l--)
            printf("%d", l);
        printf("\n");
    }
    printf("\n");

    return 0;
}

