// একটি অ্যারেতে বাইনারি সংখ্যা দেওয়া আছে, এর দশমিক মান বের কর।
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int decimal = 0;
    for(int i = n-1, x = 1; i >= 0; i--, x*=2)
        decimal += a[i]*x;
    printf("%d", decimal);
    return 0;
}