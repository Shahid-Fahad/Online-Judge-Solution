#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        if(n==3)
        {
            if(v[1]%2!=0) cout<<-1<<endl;
            else cout<<v[1]/2<<endl;
        }
        else
        {
            sort(v.rbegin()+1,--v.rend());
            if(v[1]<2)
            {
                cout<<-1<<endl;
                continue;
            }
            ll ans=0;
            for(int i=1;i<n-1;i++)
            {
                ll b=v[i]/2;
                if(v[i]%2!=0) b++;
                ans+=b;
            }
            // for(auto x:v) cout<<x<<" ";
            cout<<ans<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
}