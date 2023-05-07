// Q: https://acm.timus.ru/problem.aspx?space=1&num=1014
#include<stdio.h>
int main()
{
    int arr[13];
    int num;
    scanf("%d", &num);

    if(num == 0)
        printf("%d", 10);
    else if(num < 10)
        printf("%d", num);
    else
    {
        int index = 0;
        for(int i = 9; i > 1; i--)
        {
            while(num%i == 0)
            {
                arr[index++] = i;
                num /= i;
            }
        }
        if(num == 1)
            for(int i = index-1; i >= 0; i--)
                printf("%d", arr[i]);
        else
            printf("-1");
    }
    return 0;
}