// Q: একটি স্ট্রিংয়ের দৈর্ঘ্য বের কর। (লাইব্রেরী ফাংশন ব্যবহার করে এবং ব্যবহার না করে)।
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s", str);   // considered string without whitespace
    
    int len = strlen(str);  // using library fuction strlen()
    printf("%d\n", len);

    for(len = 0; str[len] != '\0'; len++){} // without using library function 
    printf("%d\n", len);
    return 0;
}