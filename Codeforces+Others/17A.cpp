///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<long long int>prime;
bool mark[10000000];
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
    ll n,k,i,j,c=0,m;
    cin >> n >> k;
    sieve(n);
    for(i=0;i<prime.size();i++)
    {
        m = prime[i]+prime[i+1]+1;
       for(j=0;j<prime.size();j++)
       {
           if(m==prime[j])
            c++;
       }
        if(c==k)
        {
            cout << "YES" << endl;
            return 0;
        }

    }
        cout << "NO" << endl;
}
