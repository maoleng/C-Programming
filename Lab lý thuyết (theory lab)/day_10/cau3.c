void bubble (int a[], int n)
{
    int t, i, j;
    for(i = n-1; i>0; i--)
        for(j = n-1; j>=i; --j)
            if(a[j] < a[j-1])
            {
                t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
}