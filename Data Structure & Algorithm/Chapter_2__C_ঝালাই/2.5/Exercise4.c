// Q: একটি অ্যারেতে অনেকগুলো 1 এবং 0 আছে। তোমাকে বলতে হবে সবচেয়ে বেশি কতগুলো 1 পরপর আছে।
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int max = 0, cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
            cnt++;
        else
            cnt = 0;
        if(cnt > max)
            max = cnt;
    }
    printf("%d", max);
    return 0;
}