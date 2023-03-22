///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define lim 100005
ll arr[lim];
ll fl[lim];
ll fr[lim];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
       fl[arr[i]] = i-1;
       fr[arr[i]] = n-i;
    }
    ll q;
    cin >> q;
    ll s1=0,s2=0;
    while(q--)
    {
        ll x;
        cin >> x;
        s1 = s1+ 1 +fl[x];
        s2 = s2 + 1 + fr[x];
    }
    cout << s1 << " " << s2 << endl;

}
