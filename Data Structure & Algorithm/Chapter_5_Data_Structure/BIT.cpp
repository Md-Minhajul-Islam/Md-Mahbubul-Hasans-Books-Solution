// Binary Indexed Tree
// 1 based indexing
int read(int idx)
{
    int sum = 0;
    while(idx > 0)
    {
        sum += tree[idx];
        idx -= (idx & -idx);
    }
}
void update(int idx, int val)
{
    while(idx <= MaxVal) // MaxVal = size of arr
    {
        tree[idx] += val;
        idx += (idx & -idx);
    }
}
/*
if we want to replace value -
    update(idx, val-tree[idx]);
*/