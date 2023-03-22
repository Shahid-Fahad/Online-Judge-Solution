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
    for(ll i=0;i<s.size();i++)
    {
        ll k = s[i]-48;
        ll x = 9-k;
        if(min(x,k)==0&&i==0)
        cout << k;
      else  if(x<k)
        cout << x;
        else
        {
            cout << k;
        }
        
    }
    cout <<  endl;

}
