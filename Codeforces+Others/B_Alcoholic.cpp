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
    ld x;
    cin >> n >> x;
    ld s=0,c=0,ans=-1,f=0;
    vector<ld>v;
    while(n--)
    {
        ld a,b;
        cin >> a >> b;
        ld k = a * (b/100.0);
        v.push_back(k);
       

    }
    for(ll i=0;i<v.size();i++)
    {
        s = s+v[i];
        if(s-x>0.0000001)
        {
            cout << i+1 << endl;
            f=1;
            break;
        }       
    }
    if(f==0)
    cout << -1 << endl;
}
