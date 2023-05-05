// Q: একটি অ্যারে আছে। তোমাকে অনেকগুলো প্রশ্ন করা হবে।
// প্রতিটি প্রশ্ন হবে এমন: অ্যারের i তম স্থান হতে j তম স্থানের যোগফল কত?
// যেহেতু প্রশ্ন অনেকগুলো তোমাকে উত্তরও দ্রুত দিতে হবে।
#include<stdio.h> 
int main()
{
    int n;
    scanf("%d", &n);
    int sumArray[n];
    scanf("%d", &sumArray[0]);
    for(int i = 1; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sumArray[i] = num+sumArray[i-1];
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        if(i == 0)
            printf("%d\n", sumArray[j]);
        else
            printf("%d\n", sumArray[j]-sumArray[i-1]);
    }      
    return 0;
}