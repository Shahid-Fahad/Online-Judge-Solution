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
    ll en=0,es=0,on=0,os=0;
    for(ll i=0;i<s.size();i++)
    {
        if((i+1)%2==0)
        {
            en++;
            if(s[i]>=65&&s[i]<=90)
            es++;
        }
        else
        {
            on++;
            if(s[i]>=97&&s[i]<=122)
            os++;
        }
        
    }
    if(es==en&&os==on)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    

}
