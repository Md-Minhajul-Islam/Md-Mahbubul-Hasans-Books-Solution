// Q: দুটি স্ট্রিং দেওয়া আছে বলতে হবে কোনটি lexicographically smaller (লাইব্রেরী ফাংশন ব্যবহার করে এবং ব্যবহার না করে)।
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    // Without using library fuction
    int len1 = strlen(s1), len2 = strlen(s2);
    for(int i = 0; i < len1 && i < len2; i++)
    {
        if(s1[i] < s2[i])
        {
            printf("First Stirng Is Lexicographically Smaller\n");
            break;
        }       
        else if(s1[i] > s2[i])
        {
            printf("Second Stirng Is Lexicographically Smaller\n");
            break;
        }
        else if(i == len1-1 && len1 != len2)
        {
            printf("First Stirng Is Lexicographically Smaller\n");
            break;
        }         
        else if(i == len2-1 && len1 != len2)
        {
            printf("Second Stirng Is Lexicographically Smaller\n");
            break;
        }
        else if(i == len1-1 && i == len2-1)
        {
            printf("Both Strings Are Lexicographically Equal\n");
            break;
        }   
    }

    // Using library function strcmp()
    int check = strcmp(s1, s2);
    if(check > 0)
        printf("Second Stirng Is Lexicographically Smaller\n");
    else if(check < 0)
        printf("First Stirng Is Lexicographically Smaller\n");
    else
        printf("Both Strings Are Lexicographically Equal\n");

    return 0;
}