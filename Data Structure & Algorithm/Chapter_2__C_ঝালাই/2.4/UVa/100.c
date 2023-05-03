// Q: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
#include<stdio.h>
int main()
{
    int i, j;
    while(scanf("%d %d", &i, &j) != EOF)
    {
        long long int max = 0;
        int r, s = i, e = j;
        if(i > j) 
            s = j, e = i;
        for(r = s; r <= e; r++)
        {
            long long int cnt = 1;
            int n = r;
            while (n != 1)
            {
                if(n%2 == 0)
                    n = n / 2;
                else
                    n = 3 * n + 1;
                cnt++;
            }
            if(max < cnt)
                max = cnt;
        }
        printf("%d %d %lld\n", i, j, max);
    }
    return 0;
}