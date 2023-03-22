///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll i,j,z;
    string s;
    cin >> s;
    string s1,s2,s3,s4,k;
    ll r,b,y,g;
    for(i=0; i<4; i++)
    {
       for(j=i;j<s.size();j=j+4)
       {
           if(s[j]!='!')
           {
               k.push_back(s[j]);
               break;
           }
       }
    }
    for(i=0;i<4;i++)
    {

        if(k[i]=='R')
            r = i+1;
       else if(k[i]=='G')
            g = i+1;
       else if(k[i]=='B')
            b = i+1;
       else if(k[i]=='Y')
            y = i+1;
    }
    if(r==4)
        r=0;
    else if (b==4)
        b=0;
    else if(g==4)
        g=0;
    else
        y=0;
    ll br=0,bg=0,bb=0,by=0;
    for(i=0;i<s.size();i++)
    {
        if((i+1)%4==r&&s[i]=='!')
            br++;
        else if((i+1)%4==g&&s[i]=='!')
            bg++;
        else if((i+1)%4==b&&s[i]=='!')
            bb++;
        else if((i+1)%4==y&&s[i]=='!')
            by++;
    }
    cout << br << " " << bb << " " << by << " " << bg << endl;
}
