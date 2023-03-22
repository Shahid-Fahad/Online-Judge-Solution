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
    cin >> s1 >> s2;
    ll c=s2.size(),p1=0,p2=0,f=0;
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]=='|')
        {
            f=1;
            continue;
        }
        if(f==0)
        p1++;
        else
        {
            p2++;
        }
        c++;
    }
    ll x = c/2;
    ll y = (x-p1) + (x-p2);
    if(p1<=x&&p2<=x&&y==s2.size())
    {
        ll i;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='|')
            {
                i++;
                break;
            }
            cout << s1[i];
        }
        ll j=0;
        while(p1<x)
        {
            cout << s2[j];
            j++;
            p1++;

        }
        cout << "|";
        for(;i<s1.size();i++)
        {
            cout << s1[i];
        }
         while(p2<x)
        {
            cout << s2[j];
            j++;
            p2++;

        }

    }
    else
    {
        cout << "Impossible" << endl;
    }
    

}
