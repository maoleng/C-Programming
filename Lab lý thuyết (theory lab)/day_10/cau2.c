void bubble (int a[], int n)
{
    int t, i, j;
    for(i = 0; i<n-1; ++i)
        for(j = 1; j<n; j++)
            if(a[j] < a[j-1])
            {
                t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
}