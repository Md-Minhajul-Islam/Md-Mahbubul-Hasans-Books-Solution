// Q: দুটি স্ট্রিং A এবং B দেওয়া আছে, বলতে হবে B সম্পূর্ণভাবে A এর ভিতর আছে কিনা এবং কয়বার আছে।
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int cnt = 0;
    int len1 = strlen(a), len2 = strlen(b);
    if(len1 < len2)
        cnt = 0;
    else
    {
        for(int i = 0; i < len1; i++)
        {   
            int j;
            for(j = 0; j < len2; j++)
                if(a[i+j] != b[j])
                    break;
            if(j == len2)
            cnt++;
        }
    }
    if(cnt)
        printf("B is inside A for %d time\n", cnt);
    else
        printf("B is not in A\n");
    return 0;
}