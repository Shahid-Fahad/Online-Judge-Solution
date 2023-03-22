///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        ld x;
        cin >> n >> x;
        ld s1=0,s2=0;
        for(ll i=1;i<=n;i++)
        {
            ld k;
            cin >> k;
            s1 =s1+k;
            s2 = s2 + ceil(k/x);

        }
        s1 = ceil(s1/x);
        ll p = min(s1,s2);
        ll q = max(s1,s2);

        cout << p << " " << q << endl;
    }

}
