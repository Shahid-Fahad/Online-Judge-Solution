///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll arr[100005],mx=INT_MIN;
void lmax(ll n)
{
    if(n==0)
    return;
    lmax(n-1);
    mx=max(mx,arr[n]);
    arr[n]=mx;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    lmax(n);
    for(ll i=1;i<=n;i++)
    cout << arr[i] << " ";
    cout << endl;


}
