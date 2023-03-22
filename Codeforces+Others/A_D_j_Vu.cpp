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
        map<ll,ll>mp;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        if(mp.size()==1&&s[0]=='a')
        {
            cout << "NO" << endl;
            continue;
        }
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='a')
            {
                s.insert(s.size()-i,"a");
                break;
            }
        }
        string t;
        t=s;
        reverse(t.begin(),t.end());
        if(s==t)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << s<< endl;

    }

}
