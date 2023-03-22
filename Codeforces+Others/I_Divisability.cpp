#include<bits/stdc++.h>

using namespace std;
int divisible(int a,int b,int m)
{
    int sum=0,i;
    for(i=a;i<=b;i++)
    {
        if(i%m==0)
        {
            sum+=i;
        }
    }
     return sum;
}
int main()
{
   int a,b,m,n,j,k,x,cnt,temp,sum;
   cin>>a>>b>>m;

   if(a<b)
   {
       temp=a;
       a=b;
       b=temp;
   }
   divisible(a,b,m);
   
   cout<<divisible;

   return 0;
}