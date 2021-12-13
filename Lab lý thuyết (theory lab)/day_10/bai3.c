
void selection (int a[], int n)
{

    int i,j, m, t;

    for(i = 0; i<n-1; ++i)

    {

        m = i;

        for(j = i+1; j<n; ++j)

            if(a[m] > a[j])

                m = j;

        t = a[i];

        a[i] = a[m];

        a[m] = t;

    }

}