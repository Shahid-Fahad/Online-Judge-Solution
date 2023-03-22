///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[100];
ll find(ll n)
{
    if(arr[n]<0)
    return n;
    else
    return arr[n] = find(arr[n]);
}
void Union(ll x,ll y)
{
   if(arr[x]>arr[y])
   {
       arr[y] = x;
   }
   else
   {
       arr[x] = y;
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b,c;
    cin >> a >> b >> c;
    for(ll i=1;i<=26;i++)
    arr[i]=-i;
    for(ll i=0;i<a.size();i++)
    {
        ll x = a[i]-97+1;
        ll y = b[i]-97+1;
        ll a=find(x),b=find(y);
        if(a!=b)
        {
            Union(a,b);
        }
    }
    for(ll i=0;i<c.size();i++)
    {
        ll  k = c[i]-97+1;
        ll x = find(k);
        cout << char(x+96);
    }
    cout << endl;
    

}
