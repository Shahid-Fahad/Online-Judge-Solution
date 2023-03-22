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
        ll n,i,j;
        cin >> n;
        string s;
        cin >> s;

        for(i=0;i<s.size();i++)
        {

            if(s[i]=='1'&&s[i+1]=='0')
            {
                ll zc=0,o=i,z=i+1;
                for(j=i+2;j<s.size();j++)
                {
                    if(s[j]=='0')
                    {
                        s.erase(s.begin()+z);
                        i--;
                        zc++;
                        break;
                    }
                }
                if(zc==0)
                {
                     s.erase(s.begin()+o);
                     if(i!=0)
                     i=i-2;
                }
            }

        }
        cout << s << endl;
    }

}

