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
    ll sum=0;
    string s;
    cin >> s;
    ll f=0;
    if(s[0]==s[s.size()-1])
    {
        f=1;
    }
    if(f==1)
    {
        char c = s[0];
        ll s1=0,s2=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!=c)
            {
                break;
            }
            s1++;
        }
         c = s[s.size()-1];
         for(ll i=s.size()-1;i>=0;i--)
        {
              if(s[i]!=c)
            { 
                break;
            }
            s2++;
            
        }
        sum = ((s1+1)%998244353*(s2+1)%998244353)%998244353;

    }
    else
    {
        char c = s[0];
        for(ll i=0;i<s.size();i++)
        {
             if(s[i]!=c)
            { 
                break;
            }
            sum = sum%998244353;
            sum++;
        }
        c = s[s.size()-1];
        for(ll i=s.size()-1;i>=0;i--)
        {
              if(s[i]!=c)
            { 
                break;
            }
            sum = sum%998244353;
            sum++;
        }
      sum++;
    }
    sum = sum%998244353;
    cout << sum%998244353 << endl;


}
