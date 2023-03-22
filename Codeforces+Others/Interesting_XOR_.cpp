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
        ll n;
        cin >> n;
        ll sz=-1,sb=0;
        ll a=n,b=n;
        string x = bitset<32>(n).to_string();
        for(ll i=0;i<x.size();i++)
        {
            if(x[i]=='1'&&sz==-1)
            {
                sz = x.size()-i;
                sb++;
            }
            else if(x[i]=='1'&&sz>0)
            {
                sb++;
            }
            
        }
        ll trn=1;
        for(ll i=0;i<sz;i++)
        {
            auto x = a&(1<<i);
            auto y = b&(1<<i);
            //cout << "TESTING122 " << (a&(1<<i)) << " " << (b&(1<<i)) << endl;
            if(x!=0&&y!=0)
            {
                if(sb>1)
                {
                    //a = a|(1<<i);
                    b = b&(~(1<<i));
                }
                else
                {
                   // b = b|(1<<i);
                    a = a&(~(1<<i));
                }
                sb--;
            }
            else
            {
                 a = a|(1<<i);
                 b = b|(1<<i);
            }
            
        }
        cout <<  a*b << endl;
    }

}
