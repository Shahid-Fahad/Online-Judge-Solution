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
    vector<ll>v;
    cin >> n;
    while(n--)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    while(1)
    {
        ll x;
        cin >> x;
        cout << lower_bound(v.begin(),v.end(),x)-v.begin() << endl;
    }

}

