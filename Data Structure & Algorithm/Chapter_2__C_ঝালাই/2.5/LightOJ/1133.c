// Q: https://lightoj.com/problem/array-simulation
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < m; i++)
        {
            getchar();
            char ch;
            scanf("%c", &ch);
            if(ch == 'S' || ch == 'M' || ch ==  'D')
            {
                int num;
                scanf("%d", &num);
                if(ch == 'S')
                    for(int j = 0; j < n; j++)
                        arr[j] += num;
                else if(ch == 'M')
                    for(int j = 0; j < n; j++)
                        arr[j] *= num;
                else
                    for(int j = 0; j < n; j++)
                        arr[j] /= num;
            }
            else if(ch == 'P')
            {
                int num1, num2;
                scanf("%d %d", &num1, &num2);
                int temp = arr[num1];
                arr[num1] = arr[num2];
                arr[num2] = temp;
            }
            else
            {
                int left = 0, right = n-1;
                while(left < right)
                {
                    int temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp;
                    left++, right--;
                }
            }
        }
        printf("Case %d:\n%d", caseNo, arr[0]);
        for(int i = 1; i < n; i++)
            printf(" %d", arr[i]);
        printf("\n");
    }
    return 0;
}