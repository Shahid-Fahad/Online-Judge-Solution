///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<long long int>prime;
bool mark[100000000];
vector<ll>d;
void div(ll n)
{
    d.clear();
    ll i;
    for(i=1;i<=sqrt(n);i++)
    {
      if(n%i==0)
        {
            if(n/i==i)
                d.push_back(i);
            else
            {
                d.push_back(i);
                d.push_back(n/i);
            }
        }
    }
}
void sieve(long long int n)
{
   long long int i,j,limit=sqrt(n*1.)+2;
    prime.push_back(2);
    mark[0]=1,mark[1]=1;
    for(i=4;i<=n;i+=2)
        mark[i]=1;
    for(i=3;i<=n;i=i+2)
    {
        if(!mark[i])
        prime.push_back(i);
        if(i<=limit)
        {
            for(j=i*i;j<=n;j+=(i*2))
                mark[j]=1;
        }
    }

}
int main()
{
    ll x,i,j,c=0,p=0;
    cin >> x;
    sieve(x);
    for(i=6;i<=x;i++)
    {
        div(i);
        c=0;
        for(j=0;j<d.size();j++)
        {
            if(mark[d[j]]==0)
                c++;
        }
        if(c==2)
            p++;
    }
    cout << p << endl;
}
