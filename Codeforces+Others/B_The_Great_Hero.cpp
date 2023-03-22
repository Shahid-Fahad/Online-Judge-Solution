///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll hh,hp,mn,f=0;
        cin >> hp >> hh >> mn;
        ll arr[mn],arr2[mn],s1=0,s2=0;
        vector<pair<ll,ll>>v;
        for(ll i=0;i<mn;i++)
        {
            cin >> arr[i];
           
        }
        for(ll i=0;i<mn;i++)
        {
            cin >> arr2[i];
            v.push_back(make_pair(arr[i],arr2[i]));
            
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<mn;i++)
        {
            if(i==mn-1)
            {
                ll hb = hh/v[i].first;
                if(hh%v[i].first!=0||hb==0)
                hb++;
                ll n = hp * hb;
                if(n<v[i].second)
                {
                     cout << "NO" << endl;
                    f=1;
                    break;
                }
            }
            ll hth = v[i].second/hp;
            if(v[i].second%hp!=0)
            hth++;
            ll min = v[i].first*hth;
            //cout << "min  " << min << "  hth " << hth  << endl;
            hh = hh - min;
            if(i!=mn-1)
            {
                if(hh<=0)
                {
                    cout << "NO" << endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        cout << "YES" << endl;
        
        
    }
    

}
