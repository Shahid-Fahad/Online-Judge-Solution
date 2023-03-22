///ShzFahad
#include <bits/stdc++.h>
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll i,j,p;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                for(j=i-1,p=1;p<=k&&j>=0;p++,j--)
                {
                    if(s[j]!='1')
                    s[j]='X';
                }
                for(j=i+1,p=1;p<=k&&j<n;p++,j++)
                {
                   
                    if(s[j]!='1')
                    s[j]='X';
                }
                i=j-1;
            }
        }
       
        ll foc=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                foc++;
                i = i+k;
            }
        }
        cout << foc << endl;
       
    }
}
