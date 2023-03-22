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
    ll i;
    ll c=0,c2=0;
    for(i=0;i<s.size();i++)
    {
       if(s[i]=='a')
       c++;
       else
       {
           c2++;
       }
       
    }
    
    if(c>(c2*2))
    cout << c << endl;
    else
    {
        cout << c*2-1 << endl;
    }
    



}
