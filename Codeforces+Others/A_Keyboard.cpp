///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char p;
    string s;
    cin >> p >> s;
    if(p=='R')
    {
        for(ll i=0;i<s.size();i++)
        {
            for(ll j=0;j<key.size();j++)
            {
                if(key[j]==s[i])
                cout << key[j-1];
            }
        }
        cout << endl;
    }
    else
    {
        for(ll i=0;i<s.size();i++)
        {
            for(ll j=0;j<key.size();j++)
            {
                if(key[j]==s[i])
                cout << key[j+1];
            }
        }
        cout << endl;
    }
    

}
