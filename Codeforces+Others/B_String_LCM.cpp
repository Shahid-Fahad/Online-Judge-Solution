///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll lcm(ll x,ll y)
{
    ll l = (x*y)/(__gcd(x,y));
    return l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        string s,t;
        map<char,ll>mp1,mp2;
        cin >> s  >> t;
        if(s.size()<t.size())
        swap(s,t);
        ll i;
        char c1,c2;
        for(i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
          

        }
        for(i=0;i<t.size();i++)
        {
            mp2[t[i]]++;

        }
        if(mp1.size()==1&&mp2.size()==1&&s[0]==t[0])
        {
            ll l = lcm(s.size(),t.size());
            while(l--)
            {
                cout << s[0];
            }
            cout << endl;

        }
        else
        {
            ll l = lcm(s.size(),t.size());
            ll s1 = l/s.size();
            ll s2 = l/t.size();
            string f1="",f2="";
            while(s1--)
            {
                f1=f1+s;
            }
            while(s2--)
            {
                f2=f2+t;
            }
            if(f1==f2)
            cout << f1 << endl;
            else
            {
                cout << -1 << endl;
            }
            
        }
        



    }


}
