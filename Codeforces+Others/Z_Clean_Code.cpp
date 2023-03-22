///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll tree[200000];
int query(int idx){
       int sum=0;
       while(idx>0){
             sum+=tree[idx];
             idx -= idx & (-idx);
       }
       return sum;
}
void update(int idx, int x, int n) //n is the size of the array, x is the number to add
{
       while(idx<=n)
       {
             tree[idx]+=x;
             idx += idx & (-idx);
       }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin >> n >> q;
    multiset<ll>m;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        m.insert(x);
    }
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
       
    }

}
