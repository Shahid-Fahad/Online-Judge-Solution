///Bismillahir Rahmanir Rahim
//ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
bool comp(pair<ll,vector<pair<ll,ll>>>a,pair<ll,vector<pair<ll,ll>>>b)
{
    if(a.ss[0].ff<b.ss[0].ff)
    return true;
    else
    return false;
}
bool comp2(pair<ll,pair<ll,ll>>a,pair<ll,pair<ll,ll>>b)
{
    if(a.ss.ff<b.ss.ff)
        return true;
    else
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        vector<pair<ll,vector<pair<ll,ll>>>>v;
         vector<pair<ll,pair<ll,ll>>>v2;
         ll n;
         cin >> n;
        for(ll i=1;i<=n;i++)
        {
            ll d,x,y;
            cin >> d  >> x >> y;
            vector<pair<ll,ll>>z;
            z.pb({x,y});
            v.pb({d,z});
            ///
            v2.pb({d,{x,y}});
        }
        sort(v.begin(),v.end(),comp);
        sort(v2.begin(),v2.end(),comp2);

        for(auto it:v)
        {
            cout << it.ff << " " << it.ss[0].ff << " " << it.ss[0].ss << endl;
        }
        cout << "####\n";
        for(auto it:v2)
        {
            cout << it.ff << " " << it.ss.ff << " " << it.ss.ss << endl;
        }

    }
}
