///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>v[100005];
vector<ll>primes;
ll vis[100005],dis[100005];
bool isPrime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
bool isValid(ll a,ll b)
{
    ll c=0;
    while(a>0)
    {
        if((a%10)!=(b%10))
        c++;
        a=a/10,b=b/10;
    }
    if(c==1)
    return true;
    else
    return false;
}
void buildgraph()
{
    for(ll i=1000;i<=9999;i++)
    {
        if(isPrime(i))
        primes.push_back(i);
    }
    for(ll i=0;i<primes.size();i++)
    {
        for(ll j=i+1;j<primes.size();j++)
        {
            ll a = primes[i];
            ll b = primes[j];
            if(isValid(a,b)==1)
            {
               
                v[a].push_back(b);
                v[b].push_back(a);
            }
        }    
    }
}
void bfs(ll root)
{
    queue<ll>q;
    q.push(root);
    vis[root]=1;
    dis[root]=0;
    while(q.size()!=0)
    {
        ll n = q.front();
        q.pop();
        for(ll i=0;i<v[n].size();i++)
        {
            ll child = v[n][i];
            if(vis[child]==0)
            {
                vis[child]=1;
                q.push(child);
                dis[child] = dis[n]+1;
            }
        }
    }            
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    buildgraph();
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        for(ll i=1000;i<=9999;i++)
        {
            vis[i]=0;
            dis[i]=-1;
        }
        bfs(a);
        if(dis[b]==-1)
        {
            cout << "Impossible" << endl;
        }
        else
        cout << dis[b] << endl;
    }

}
