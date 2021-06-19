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
    while(cin >> s)
    {
        ll i,j,k,c=0;
        for(i=0; i<s.size(); i++)
        {
            for(j=i; j<s.size(); j++)
            {
                string x="";
                ll w=0,y=4;
                for(k=i; k<=j; k++)
                {
                    if(isalpha(s[k]))
                    {
                        w++;
                        break;
                    }
                    x.push_back(s[k]);
                }
                if(w==1)
                    continue;
                if(!x.empty())
                    {y = stoi(x);
                if(y%3==0)
                    c++;}
            }
        }
        cout << s.size() << endl;
        cout << c << endl;
    }
}
