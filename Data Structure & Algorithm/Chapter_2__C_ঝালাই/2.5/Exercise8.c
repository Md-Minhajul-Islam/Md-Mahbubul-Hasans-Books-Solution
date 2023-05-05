// Q: দুটি স্ট্রিং জোড়া লাগাও।
#include<stdio.h>
int main()
{
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    char s[200];
    int i;
    for(i = 0; s1[i] != '\0'; i++)
        s[i] = s1[i];
    for(int j = 0; s2[j] != '\0'; j++, i++)
        s[i] = s2[j];
    printf("%s", s); 
    return 0;
}