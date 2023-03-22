///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll f = 0;
    ll st, en;
    for (ll i = 0; i < s.size(); i++)
    {
        if (f == 0 && s[i] == 'R')
            f = 1;
        if (f == 0 && s[i] == 'L')
            f = 2;
        if(f!=0)
        break;  
    }
    if(f==1)
    {
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                cout << i+1 << " ";
                break;
            }
        }
        for(ll i=s.size()-1;i>=0;i--)
        {
                 if(s[i]=='R'&&s[i+1]=='L')
            {
                cout << i+1 << endl;
                break;
            }
               else  if(s[i]=='R'&&s[i+1]=='.')
            {
                cout << i+1+1 << endl;
                break;
            }


        }
    }
    if(f==2)
    {
        for(ll i=s.size()-1;i>=0;i--)
        {
                 if(s[i]=='L')
            {
                cout << i+1 << " ";
                break;
            }


        }
         for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                cout << i << endl;
                break;
            }
        }
    }
    
}
