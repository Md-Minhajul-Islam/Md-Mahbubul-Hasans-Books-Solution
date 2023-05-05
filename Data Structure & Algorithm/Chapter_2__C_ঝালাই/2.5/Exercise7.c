// একটি শব্দে ছোট হাতের অক্ষর (a, b, ..z) এবং বড় হাতের অক্ষর (A, B, .. Z) এর সংখ্যা নির্ণয় কর।
#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int small = 0, capital = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            small++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            capital++;
    }
    printf("Small letter: %d\nCapital letter: %d\n", small, capital);
    return 0;
}