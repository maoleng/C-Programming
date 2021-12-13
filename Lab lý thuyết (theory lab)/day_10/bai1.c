#include<stdio.h>
int linearSearch(int a[], int n, int x)
{
    int i;
    for(i = 0; i<n; ++i)
        if(a[i] == x)
            return i;
    return -1;//Not found
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
    int a[] = {8,10, 1, 6, 5};
    output(a, 5);
    int x = 20;
    printf("Linear search: %d\n", linearSearch(a,5,x));
    return 0;

}