#include<stdio.h>
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

void output(int a[], int n)
{
    int i;
    for(i = 0; i<n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int x = 20;
    int b[] = {2, 4, 5, 10, 12, 20, 25};
    output(b, 7);
    printf("Binary search: %d\n", binarySearch(b, 7, x));
    return 0;

}