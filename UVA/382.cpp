///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2,ts1,ts2;
    ll i,b=-1;
    cin >> s1 >> s2;
    ts1=s1,ts2=s2;
    reverse(ts1.begin(),ts1.end());
    reverse(ts2.begin(),ts2.end());

    for(i=0;i<max(s1.size(),s2.size());i++)
    {
        if(ts1[i]!=ts2[i])
        {
            b = i;
            break;
        }
        if(i==min(s1.size(),s2.size()))
        {
            b = i+1;
            break;
        }
    }
    if(b==-1)
        cout << 0 << endl;
    else
    cout << s1.size()-b+s2.size()-b << endl;


}
