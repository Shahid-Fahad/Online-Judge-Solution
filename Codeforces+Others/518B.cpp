///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    ll i,j;
    cin >> s1 >> s2;
    ll chck[123]= {0};
    for(i=0; i<s2.size(); i++)
    {
        ll x=s2[i];
        chck[x]++;
    }
    ll y=0,n=0;
    for(i=0; i<s1.size(); i++)
    {
        ll x=s1[i];
        if(chck[x]>0)
        {
            y++;
            chck[x]--;
            s1[i]=';';
        }

    }
    for(i=0; i<s1.size(); i++)
    {
        ll x = s1[i];
        if(x>=65&&x<=90)
        {
            x = x+32;
            if(chck[x]>0)
            {
                n++;
                chck[x]--;
            }
        }
        else if(x>=97&&x<=122)
        {
            x = x-32;
            if(chck[x]>0)
            {
                n++;
                chck[x]--;
            }
        }

    }

    cout << y << " " << n << endl;
}
