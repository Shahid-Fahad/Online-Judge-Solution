///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ///1110101101001111011110
    ///110010100111001
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a>> b;
        string s,s2;
        cin >> s;
        s2=s;
        ll c1=0,c2=0,i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                for(;i<s.size();i++)
                {
                    if(s[i]=='0')
                        break;
                    s[i]='0';
                }
                //cout << "tick " << c1 << endl;
            }
            //cout << "Checking  " << s << endl;
        }
        ll ac=0,z=0;
        for(i=0; i<s2.size(); i++)
        {
            if(ac==1&&s2[i]=='0')
            {
                ac=2;
                z++;
            }
            if(s2[i]=='1'&&(ac==0||ac==1))
            {
                ac=1;
                s2[i]='0';
            }
            if(s2[i]=='1'&&ac==2)
            {
                ac=0;
                s2[i]='0';
                c2 = c2 + (z*b)+a;
                z=0;
            }

        }
        cout << min(c1,c2) << endl;
    }

}
