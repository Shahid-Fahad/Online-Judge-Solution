///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[100005];
ll find(ll n)
{
    if(arr[n]==n)
    return n;
    else 
    return arr[n] = find(arr[n]);
}
void Union(ll x, ll y)
{
    arr[x] = max(arr[x],arr[y]);
    arr[y] = x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    for(ll i=1;i<=n;i++)
    arr[i]=i;
    while(m--)
    {
        ll x,y;
        cin >> x >> y;
        ll a=find(x),b=find(y);
        if(a!=b)
        Union(a,b);
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
        ll a=find(x),b=find(y);
        if(a==b)
        {
            cout << "TIE" << endl;
        }
        else
        {
           if(abs(arr[a])>abs(arr[b]))
           cout << x << endl;
           else
           cout << y << endl;
        }
        


    }
}
