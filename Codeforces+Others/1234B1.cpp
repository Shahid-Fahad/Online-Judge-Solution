#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,k,i,j,c=0,x=0,s,Count=0;
    cin >> n >> k;
    int id[n],msg[k];
    for(i=0;i<n;i++)
    {
        cin >> id[i];
    }
    for(i=0;i<k;i++)
    {
        msg[i] = 0;
    }
   for(i=0;i<n;i++)
   {
       c = 0;
       for(j=0;j<k;j++)
       {
           if(id[i]==msg[j])
            c++;
       }
       if(c==0)
       {
           for(s=k-1;s>=0;s--)
           swap(msg[x+s],msg[x+s-1]);
           msg[x] = id[i];

       }
   }
    for(i=0;i<k;i++)
    {
        if(msg[i]==0)
            continue;
        Count++;
    }
    cout << Count << endl;
    for(i=0;i<k;i++)
    {
        if(msg[i]==0)
            continue;
        cout << msg[i] << " ";
    }


}
