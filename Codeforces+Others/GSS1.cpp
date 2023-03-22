///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define lim 500005
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
    tree[node] = max(tree[Left],tree[Right]);
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e||j<b)
        return LONG_LONG_MIN;
    if(b>=i&&e<=j)
        return tree[node];
     ll Left = 2*node, Right = Left+1;
    ll mid = (b+e)/2;
    ll p1 = query(Left,b,mid,i,j);
    ll p2 = query(Right,mid+1,e,i,j);
    return max(p1,p2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    for(ll i=1;i<=n;i++)
    cin >> arr[i];
    for(ll i=2;i<=n;i++)
    arr[i]=arr[i]+arr[i-1];
    init(1,1,n);
    ll q;
    cin >> q;
    while(q--)
    {
        ll i,j;
        cin >> i >> j;
        cout << query(1,1,n,i,j) << endl;
    }

}
