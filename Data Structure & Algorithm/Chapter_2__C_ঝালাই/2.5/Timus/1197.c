// Q: https://acm.timus.ru/problem.aspx?space=1&num=1197
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int row[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int col[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    while(t--)
    {
        char input[3];
        scanf("%s", input);
        int r = input[0]-'a'+1, c = input[1]-'0', ans = 0;
        for(int i = 0; i < 8; i++)
        {
            int r2 = r+row[i], c2 = c+col[i];
            if(r2 >= 1 && r2 <= 8 && c2 >= 1 && c2 <= 8)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}