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
        ll trn=1;
        for(ll i=0;i<s.size();i++)
        {
            if(trn==1)
            {
                if(s[i]=='a')
                cout << "b";
                else
                {
                    cout << "a" ;
                }
                trn=2;
                
            }
            else
            {
                if(s[i]=='z')
                cout << "y";
                else
                {cout << "z";
                }
                trn=1;
            }
            
        }
        cout << endl;
    }

}
