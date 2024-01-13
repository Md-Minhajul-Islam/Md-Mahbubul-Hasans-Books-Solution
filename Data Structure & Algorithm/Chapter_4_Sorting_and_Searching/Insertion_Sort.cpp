
for(int i = 1; i <= n; i++)
{
    x = num[i];
    j = i-1;
    while(j >= 1 && num[j] > x)
    {
        num[j+1] = num[j];
        j--;
    }
    num[j+1] = x;
}