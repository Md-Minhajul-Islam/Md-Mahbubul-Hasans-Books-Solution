//Q: কোনো একটি সংখ্যার বর্গমূলের কাছের পূর্ণসংখ্যাটি প্রিন্ট কর

#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    scanf("%lf", &n);
    int ans = (int) (sqrt(n)+0.5);
    printf("%d", ans);
    return 0; 
}