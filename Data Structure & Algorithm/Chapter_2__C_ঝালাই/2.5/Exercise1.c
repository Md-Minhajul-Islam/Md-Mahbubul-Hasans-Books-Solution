// Q: একটি দশমিক সংখ্যাকে বাইনারিতে রুপান্তর কর।
#include<stdio.h>
int main()
{
    int n, a[31], i;
    scanf("%d", &n);
    for(i = 0; n > 0; i++)
    {
        a[i] = (n%2);
        n /= 2;
    }
    for(i = i-1; i >= 0; i--)
        printf("%d", a[i]);
    return 0;
}