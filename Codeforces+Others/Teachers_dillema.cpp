///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[100005];
ll find(ll n)
{
    if(arr[n]<0)
    return n;
    else
    return arr[n] = find(arr[n]);
}
void Union(ll x,ll y)
{
    arr[x] = arr[x] - abs(arr[y]);
    arr[y] = x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r;
    cin >> n >> r;
    for(ll i=1;i<=n;i++)
    arr[i]=-1;
    while(r--)
    {
        ll x,y;
        cin >> x >> y;
        ll a = find(x), b = find(y);
        if(a!=b)
        Union(a,b);
    }
    ll c=1;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i]<0)
        c = (c*abs(arr[i]))%1000000007;
    }
    cout << c  << endl;

}
