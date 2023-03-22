///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll i;
    map<ll,vector<ll>>mp;
    map<ll,ll>mp2;
    for(i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        mp[x].push_back(i+1);
    }
    ll c=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        ll k = it->first;
        auto v = it->second;
        if(v.size()==1)
        {
            c++;
            mp2[k]=0;
            continue;
        }
        for(i=v.size()-1;i>0;i--)
        {
            v[i] = v[i]-v[i-1];
        }
        v[0]=0;
       
        sort(v.begin(),v.end());
        if(v[1]==v[v.size()-1])
        {
            c++;
            mp2[k]=v[1];

        }
        
    }
    cout << c << endl;
   for(auto it=mp2.begin();it!=mp2.end();it++)
   {
       cout << it->first << " " << it->second << endl;

   } 

}
