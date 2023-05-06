// Q: দুটি স্ট্রিং A এবং B দেওয়া আছে, বলতে হবে B A এর subsequence কি না।
// B A এর subsequence হবে যদি A থেকে কিছু অক্ষর মুছে ফেললে B পাওয়া যায়।
// যেমনঃ A = bangladesh এবং B = bash হলে বলা যায় যে B, A এর subsequence
// কিন্তু B = dash কিন্তু subsequence হবে না।

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int j = 0, len = strlen(b);
    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == b[j])
            j++;
        if(j == len)
            break;
    }
    if(j == len)
        printf("B is subsequence of A\n");
    else
        printf("B is not subsequence of A\n");
    return 0;
}