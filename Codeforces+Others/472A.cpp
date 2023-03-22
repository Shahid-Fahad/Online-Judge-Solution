///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<long long int>prime;
bool mark[1000004];
void sieve(long long int n)
{
    long long int i,j,limit=sqrt(n*1.)+2;
    prime.push_back(2);
    mark[0]=1,mark[1]=1;
    for(i=4; i<=n; i+=2)
        mark[i]=1;
    for(i=3; i<=n; i=i+2)
    {
        if(!mark[i])
            prime.push_back(i);
        if(i<=limit)
        {
            for(j=i*i; j<=n; j+=(i*2))
                mark[j]=1;
        }
    }

}
int main()
{
    ll n;
    cin >> n;
    sieve(n);
    if(n%2==0)
    {
        ll l=0,r=n;
        while(1)
        {
            l+=2;
            r-=2;
            if(l+r==n&&mark[l]==1&&mark[r]==1)
                break;
        }
        cout << l << " " << r << endl;
    }
    else
    {
        ll l=1,r=n-1;
        while(1)
        {
            l+=2;
            r-=2;
            if(l+r==n&&mark[l]==1&&mark[r]==1)
                break;
        }
        cout << l << " " << r << endl;
    }
}
