#include<bits/stdc++.h>
using namespace std;
int afun(int a)
{
    int c=0;
    while(a!=1)
   {
       if(a%2==0)
    {
        a = a/2;
    c++;
    }
    else if(a%2==1)
    {
        a = 3*a+1;
        c++;
    }
   }
    return c;
}
int mn(int arr[],int s,int q)
{
    int maxnum=0,maxsize=0;
    if(arr[s]>maxsize)
    {
        maxsize =arr[s];
        maxnum =q;
   return maxnum;
    }
}
int ms(int arr[],int s,int q)
{
    int maxnum=0,maxsize=0;
    if(arr[s]>maxsize)
    {
        maxsize =arr[s];
        maxnum =q;
   return maxsize;
    }
}
int main()
{
    int x,y,i,temp,q,mnum,msiz;
    int sar[100];
    cin >> x >> y;
    for(i=0,q=x;q<=y;q++,i++)
    {
        sar[i] = afun(q);
        mnum = mn(sar,i,q);
        msiz = ms(sar,i,q);

    }
    printf("Between %d and %d, %d generates the longest sequence of %d values.\n",x,y,mnum,msiz);

}
