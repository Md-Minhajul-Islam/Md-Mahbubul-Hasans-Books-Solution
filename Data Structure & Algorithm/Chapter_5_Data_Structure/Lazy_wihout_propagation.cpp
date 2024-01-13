// bulb on-off

void update(int at, int L, int R, int l, int r)
{
    if(r < L || R < l) return;
    if(l <= L && r >= R) 
    {
        toggle[at] ^= 1; return;
    }
    int mid = (L+R)/2;
    update(at*2, L, mid, l, r);
    update(at*2+1, mid+1, R, l, r);
}
int query(int at, int L, int R, int pos)
{
    if(pos < L || pos > R) return 0;
    if(L <= pos && R >= pos) return toggle[at];

    int mid = (L+R)/2;
    if(pos <= mid) return query(at*2, L, mid, pos)^toggle[at];
    else return query(at*2+1, mid+1, R, pos)^toggle[at];
}