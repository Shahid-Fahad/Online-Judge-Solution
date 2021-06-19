#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=0;
    cin >> t;
    while(t--)
    {
        x++;
        int n,i,hj=0,lj=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
           cin >> arr[i];
        }
        for(int i=1;i<n;i++)
        {
           if(arr[i]>arr[i-1])
           {
               hj++;
           }
         else  if(arr[i]<arr[i-1])
           {
               lj++;
           }
        }
         printf("Case %d: %d %d\n",x,hj,lj);
}
}
