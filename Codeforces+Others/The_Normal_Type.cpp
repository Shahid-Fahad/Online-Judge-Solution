///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll i;
    map<char,ll>mp;
    for(i=0;i<n;i++)
    {
        s[i] = tolower(s[i]);
        mp[s[i]]++;
    }
    if(mp.size()==26)
    cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    

}
