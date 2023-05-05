// Q: একটি অ্যারেতে অনেকগুলো সংখ্যা দেওয়া আছে তাদেরকে ছোট হতে বড় অনুসারে সাজাও।
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n-1; i++)
    {
        int small = i;
        for(int j = i+1; j < n; j++)
            if(a[small] > a[j])
                small = j;
        if(small != i)
        {
            int t = a[i];
            a[i] = a[small];
            a[small] = t;
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
// This algorithm is known as Selection Sort.
// It is beginner friendly, but not so efficient.
// There are many sorting algorithms,
// which are more efficient than this. 