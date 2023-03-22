///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<long long int>prime;
bool mark[1000001];
void sieve(ll n)
{
    ll i,j;
    prime.clear();
    mark[0]=true;
    mark[1]=true;
    mark[2]=false;
    prime.push_back(2);
    for(i=4; i<=n; i+=2)
        mark[i]=true;
    for(i=3; i<=n; i=i+2)
    {
        if(mark[i]==false)
        {
            prime.push_back(i);
            for(j=i*i; j<=n; j=j+i)
                mark[j]=true;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve(1000005);
    ll t;
    cin >> t;
    while(t--)
    {
        ll l,r;
        cin >> l >> r;
        cout << prime[prime.size()-1] << endl;
    }

}
