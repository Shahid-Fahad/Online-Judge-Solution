///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll bench=0;
ll vis[100005];
ll col[100005];
vector<ll>v[100005];
void bptest(ll n,ll c)
{
    vis[n] = 1;
    col[n] = c;
    for(ll i=0;i<v[n].size();i++)
    {
        ll child = v[n][i];

        if(vis[child]==0)
        {
            if(c==1)
            {
                bptest(child,0);
            }
            else
            {
                 bptest(child,1);
                
            }
            
        }
        else
        {
            if(col[child]==col[n])
            {
                bench++;
            }
        }
        
    }
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,e;
    cin >> n >> e;
    for(ll i=0;i<e;i++)
    {
        ll x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            bptest(i,1);
        }
    }
    

    bench = bench/2;
    n = n-bench;
    if(n%2==1)
    bench++;
    
    cout << bench << endl;

}
