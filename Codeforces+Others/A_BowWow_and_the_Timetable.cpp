///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll x = s.size();
    if(x%2==1)
    {
       ll f=0;
        for(ll i=1;i<=s.size();i++)
        {
            if(s[i]=='1')
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout << (x-1)/2 << endl;
        }
        else
        {
            cout << (x-1)/2 +1 << endl;
        }
        
    }
    else
    {
        cout << (x-1)/2 + 1 << endl;
    }
    

}
