// Q: n! নির্ণয় কর
#include<stdio.h>
int main()
{
    int n, fact = 1;
    scanf("%d", &n);
    for(int i=n; i>0; i--)  //can calculate at max 12!
        fact *= i;          //use larger datatype for more.
    printf("%d\n", fact);
    return 0;
}


