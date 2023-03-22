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
        for(ll i=1;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        char c;
        if(mp[b]>0)
        c = 'b';
        else
        c = 'a';

        string x = s[0]+c;
        if(x=="aa")
        cout << 'a' << endl;
        else if(x="bb"||x=="ab")
        cout << 'b' << endl;
        else
        cout << "ba" << endl;
    }

}
