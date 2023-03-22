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
    set<string>st;
    while(getline(cin,s))
    {
        string tmp;
        for(ll i=0;i<s.size();i++)
        {
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
            {
                s[i] = tolower(s[i]);
                tmp = tmp+s[i];
            }
            else
            {
                if(tmp!="")
                st.insert(tmp);
                tmp="";
            }
            
        }
    if(tmp!="")
    st.insert(tmp);
    }
    for(auto x:st)
    {
        cout << x << endl;
    }
    

}
