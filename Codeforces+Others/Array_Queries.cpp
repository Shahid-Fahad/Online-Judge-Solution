///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define lim 1000005
ll arr[lim];
ll tree[4*lim];
void init(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    ll Left = 2*node, Right = Left+1;
    ll mid = (b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node] = min(tree[Left],tree[Right]);
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e||j<b)
        return INT_MAX;
    if(b>=i&&e<=j)
        return tree[node];
     ll Left = 2*node, Right = Left+1;
    ll mid = (b+e)/2;
    ll p1 = query(Left,b,mid,i,j);
    ll p2 = query(Right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for(ll tc=1;tc<=t;tc++)
    {
        cout << "Case " << tc << ":" << endl;
        ll n,q;
        cin >> n >> q;
        for(ll i=1;i<=n;i++)
        {
            cin >> arr[i];
        }
        init(1,1,n);
        while(q--)
        {
            ll i,j;
            cin >> i >> j;
            cout << query(1,1,n,i,j) << endl;
            
        }
    }

}
