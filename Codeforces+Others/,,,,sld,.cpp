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
        string s,s1="",s2="";
        cin >> s;
        ll i=0,j=n-1,k;
        if(s[0]=='1')
            k=1;
        else
            k=0;
           ll c=0,p;
        for(i=0;i<n-1;i++)
        {
           if(s[i]==s[i+1])
           {
               if(s[i]=='0')
               p='0';
               else
               p='1';

               for(j=i+2;j<n;j++)
               {
                    if(s[j]==s[j+1])
                   {
                       reverse(s.begin()+i+1,s.begin()+j+1);
                       c++;[]
                   }
               }
               cout << s << endl;
           }
        }
            cout << c << endl;
    }

}

