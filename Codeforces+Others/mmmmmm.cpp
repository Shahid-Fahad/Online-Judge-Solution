///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>v,v2;
bool nightcheck(ll ans,ll arr[],ll k,ll n)
{
    ll i,night=1,s=0;
    for(i=0;i<n;i++)
    {
        s = s+arr[i];
        if(s>ans)
        {
            night++;
            v.push_back(s-arr[i]);
            s = arr[i];
        }
        if(i==n-1&&s<ans)
            v.push_back(s);

    }
    if(night<=k)
        {
            v2=v;
            return true;}
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,y;
    cin >> t;
    for(y=1;y<=t;y++)
    {
        ll n,k,i,j;
        cin >> n >> k;
        k++;
        n++;
        ll arr[n],Min=0,s=0;
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            s = s+arr[i];
            if(arr[i]>Min)
            {
                Min=arr[i];
            }
        }
        ll high=s,low=Min,ans,mid;
        while(low<=high)
        {
            mid = (high+low)/2;
            if(nightcheck(mid,arr,k,n))
            {
                ans = mid;
                v.clear();
                high = mid-1;
            }
            else
                low  = mid+1;
        }
        cout << "Case " << y << ": " << ans << endl;
        for(i=0;i<v2.size();i++)
            cout << v2[i] << endl;
    }

}
