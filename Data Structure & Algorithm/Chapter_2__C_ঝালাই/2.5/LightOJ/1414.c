// https://lightoj.com/problem/february-29
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        char start_month[10], end_month[10];
        int start_day, end_day, start_year, end_year;
        scanf("%s %d, %d", start_month, &start_day, &start_year);
        scanf("%s %d, %d", end_month, &end_day, &end_year);
        if(start_month[0] == 'F' || (start_month[0] == 'J' && start_month[1] == 'a'))
            start_year = start_year;
        else start_year++;
        if((end_month[0] == 'J' && end_month[1] == 'a') || (end_month[0] == 'F' && end_day < 29)) end_year--;
        
        int mul_of_4 = end_year/4 - (start_year-1)/4;
        int mul_of_100 = end_year/100 - (start_year-1)/100;
        int mul_of_400 = end_year/400 - (start_year-1)/400;
        
        int leapday = mul_of_4 + mul_of_400 - mul_of_100;
        printf("Case %d: %d\n", caseNo, leapday);
    }
    return 0;
}