#include<stdio.h>
void shiftright(int a[], int x, int y)
{
    int b[100001], i, j;

    y=y%x;
    for(i=x-y,j=0; i<x; i++,j++)
    {
        b[j]=a[i];
    }

    for(i=0,j=y; i<x-y; i++,j++)
    {
        b[j]=a[i];
    }

    printf("%d", b[0]);
    for(i=1; i<x; i++)
    {
        printf(" %d", b[i]);
    }
    printf("\n");

}


int main()
{
    int n, a[100001], x, y, i;
    scanf("%d%d", &x, &y);

    for(i=0; i<x; i++)
    {
        scanf("%d", &a[i]);
    }


    shiftright(a, x, y);

    return 0;
}