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
    while(t--)
    {
        string s;
        cin >> s;
        map<char,ll>mp;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        ll oc=0,ec=0,odc=0;
        for(auto it:mp)
        {
            //cout << it.first << " " << it.second << endl;
            if(it.second==1)
            oc++;
            if(it.second%2==0)
            {
               ll p = (it.second-2)/2;
               ec = ec+p+1;
            }
            if(it.second%2==1&&it.second>=5)
            {
               ll p =  (it.second-3)/2;
               ec = ec+p;
            }
        }
        //cout << ec << " " << odc << " " << oc << endl;
        if(ec>=oc)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }

}
