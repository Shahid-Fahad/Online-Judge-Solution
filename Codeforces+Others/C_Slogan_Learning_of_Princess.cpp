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
    cin.ignore();
    map<string,string>mp;
    while(n--)
    {
        string f,s;
        getline(cin,f);
        getline(cin,s);
        mp[f]=s;

    }
    ll q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
       
        string a;
        getline(cin,a);
        cout << mp[a] << endl;
    }

}
