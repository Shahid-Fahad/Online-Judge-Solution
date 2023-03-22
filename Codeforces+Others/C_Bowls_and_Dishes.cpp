///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v,v2;
    map<ll, ll> mp,mp2;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        mp2[x]++;
        mp2[y]++;
        v.push_back(make_pair(x, y));
    }
    
    for(auto x:mp2)
    {
        v2.push_back(make_pair(x.second,x.first));
    }
    
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    ll k;
    cin >> k;
    for(ll i=1;i<=k;i++)
    {
        ll x, y;
        cin >> x >> y;
        ll f=0;
        for (ll j = 0; j < v.size(); j++)
        {
            ll p = v[j].first, q = v[j].second;
            if(x==p||x==q)
            {
                if(x==p)
                {
                   
                    if((mp[x]==0&&mp[q]>0))
                    {
                        mp[x]++;
                        f=1;
                        break;
                    }
                    else if(mp[x]>0&&mp[q]==0)
                    {
                        mp[q]++;
                        f=1;
                        break;
                    }
                }
                else
                {
                   if((mp[p]>0&&mp[x]==0))
                    {
                        mp[x]++;
                        f=1;
                        break;
                    }
                    else if(mp[p]==0&&mp[x]>0)
                    {
                        mp[p]++;
                        f=1;
                        break;
                    }
                }
                
            }
            else if(y==p||y==q)
            {
                if(y==p)
                {
                    if((mp[y]==0&&mp[q]>0))
                    {
                        mp[y]++;
                        f=1;
                        break;
                    }
                    else if(mp[y]>0&&mp[q]==0)
                    {
                        mp[q]++;
                        f=1;
                        break;
                    }
                }
                else
                {
                   if((mp[p]>0&&mp[y]==0))
                    {
                        mp[y]++;
                        f=1;
                        break;
                    }
                    else if(mp[p]==0&&mp[y]>0)
                    {
                         mp[p]++;
                        f=1;
                        break;
                    }
                }
                
            }
        }
        cout << "f " << f << endl;
        if(f==0)
        {
            mp[x]++;
        }        
        cout << "testing \n";
        for(auto x:mp)
        {
            cout <<x.first << " " << x.second << endl;
        }
        cout << "end" << endl;
        
    }
    ll c = 0;
    /*cout << "test" << endl;
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }*/
    for (ll i = 0; i < v.size(); i++)
    {
        ll x = mp[v[i].first], y = mp[v[i].second];
        if (x >= 1 && y >= 1)
            c++;
    }
    cout << c << endl;
}
