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
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(k==0)
        {
            cout << "YES" << endl;
        }
        else if((k+1+k)>s.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            ll c=0;
            string tmp,tmp2;
            for(ll i=0;i<s.size();i++)
            {
               c++;
               tmp = tmp+s[i];
               if(c==k)
               break;
            }
             c=0;
            for(ll i=s.size()-1;i>=0;i--)
            {
               c++;
               tmp2 = tmp2+s[i];
               if(c==k)
               break;
            }
           // reverse(tmp2.begin(),tmp2.end());
            //cout << "TEST " << tmp << " " << tmp2 << endl;
            if(tmp==tmp2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
            
            
            
        }
        
    }
 
}