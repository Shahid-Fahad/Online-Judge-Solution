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
    cin >> s1;
    ll c=0;
    for(ll i=0;i<s1.size();i++)
    {
        ll sum = s1[i]-'A'+1;
             if(sum==1||sum==3||sum==5||sum==8||sum==13||sum==21)
        c++;
    }
    ld sk = ceil(s1.size()/2.00);
    ll sz=sk;
    cout << c  << "  " << sz << endl;
    if(c>=sz)
    cout << "YES" << endl;
    else
    cout <<"NO" << endl;

}
