// Q: একটি বাক্যে শব্দের সংখ্যা নির্ণয় কর। শব্দগুলো একাধিক স্পেস দিয়ে আলাদা করা থাকতে পারে।
#include<stdio.h>
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int cnt = 0;
    for(int i = 0; s[i] != '\n'; i++)   // fgets() keep on reading until new line character encountered (included)
    {                                   //  or maximum limit of character array.
        if(s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\n'))
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}