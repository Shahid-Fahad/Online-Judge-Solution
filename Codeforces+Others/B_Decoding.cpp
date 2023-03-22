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
    ll x;
    string s;
    cin >> s;
    x = n-2;
    for(ll i=x;i>=0;i=i-2)
    {
        cout << s[i];
    }
    if(n%2==0)
    x=1;
    else
     x=0;
    for(ll i=x;i<n;i=i+2)
    {
        cout << s[i];
    }
    cout << endl;

}
