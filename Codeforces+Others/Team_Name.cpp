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
    map<string,ll>mp;
    while(t--)
    {
        ll n;
        cin >> n;
        ll fa=0,fb=0;
        while(n--)
        {
            string x;
            cin >> x;
            if(x[0]=='a')
            fa++;
            else
            fb++;
            string k = x.substr(1,x.size()-1);
            mp[k]++;
        }
        ll c=0;
        for(auto it:mp)
        {
            if(it.second==1)
            c++;
            else
            
            {
                fa--;
                fb--;
            }
        }
        cout << fa * (fb*2) << endl;

    }

}
