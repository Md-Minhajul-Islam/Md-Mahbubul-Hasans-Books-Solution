
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j < n-i; j++)
    {
        if(num[j+1] < num[j])
            swap(num[j], num[j+1]);
    }
}