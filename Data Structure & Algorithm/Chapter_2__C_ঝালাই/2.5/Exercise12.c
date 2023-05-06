// Q: আমি একটি তারিখ 21/9/2013 এরকম ফরম্যাটে দেব।
// তোমাকে এই স্ট্রিং হতে দিন, মাস ও বছর আলাদা করতে হবে এবং তিনটি int ভ্যারিয়েবলে রাখতে হবে।
#include<stdio.h>
int main()
{
    char s[11];
    scanf("%s", s);
    int day = 0, month = 0, year = 0;
    int c1 = 1, c2 = 1;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(c1)
        {
            if(s[i] == '/')
                c1 = 0;
            else
                day = day*10+(s[i]-'0');
        }
        else if(c2)
        {
            if(s[i] == '/')
                c2 = 0;
            else
                month = month*10+(s[i]-'0');
        }
        else
            year = year*10+(s[i]-'0');
    }
    printf("Day: %d\nMonth: %d\nYear: %d\n", day, month, year);    
    return 0;
}