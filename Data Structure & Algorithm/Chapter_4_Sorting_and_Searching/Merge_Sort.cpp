int num[100000], temp[100000];

void mergesort(int lo, int hi)
{
    if(lo == hi) return;
    int mid = lo+(hi-lo)/2;

    mergesort(lo, mid);
    mergesort(mid+1, hi);

    int i, j, k;
    for(i = lo, j = mid+1, k = lo; k <= hi; k++)
    {
        if(i == mid+1) temp[k] = num[j++];
        else if(j == hi+1) temp[k] = num[i++];
        else if(num[i] < num[j]) temp[k] = num[i++];
        else temp[k] = num[j++];
    }
    for(k = lo; k <= hi; k++)num[k] = temp[k];
}