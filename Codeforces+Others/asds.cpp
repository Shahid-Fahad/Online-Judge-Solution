///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define MAX 32000
vector<long long int>prime;
bool mark[1000000];
void sieve(long long int n)
{
    long long int i,j,limit=sqrt(n+1)+2;
    prime.push_back(2);
    mark[0]=1,mark[1]=1;
    for(i=4; i<=n; i+=2)
        mark[i]=1;
    for(i=3; i<=n; i++)
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
void sieve() {
    bool isPrime[MAX];
    for (int i = 0; i < MAX; ++i) isPrime[i] = true;
    for (int i = 3; i * i <= MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i < MAX; i += 2) {
        if (isPrime[i]) prime.push_back(i);
    }
}
void segsieve(ll l,ll r)
{
    ll i,j;
    bool arr[r-l+1];
    for(i=0;i<=r-l;i++)
        arr[i]=true;
    if(l==1)
    arr[0]=false;
    for(i=0;prime[i]*prime[i]<=r;i++)
    {
        ll curp = prime[i];
        ll base = (l/curp)*curp;
        if(base<l)
            base = base+curp;
        for(j=base;j<=r;j=j+curp)
        {
            arr[j-l]=false;
        }
        if(base==curp)
            arr[base-l]=true;
    }
    for(i=0;i<=r-l;i++)
    {
        if(arr[i])
        cout << i+l << endl;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int i,a,b;
        cin >> a >> b;
        sieve();
        segsieve(a,b);
    }

}
