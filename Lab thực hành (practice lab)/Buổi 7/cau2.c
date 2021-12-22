int binarySearch(int a[], int n, int x)
{
    int l, r, m;
    l = 0;
    r = n-1;
    while (l <= r)
    {
        m = (l+r)/2;
        if(a[m] == x)
            return m;
        else if (a[m] < x)
            l = m + 1;
        else 
            r = m - 1;
    }
    return -1;
}