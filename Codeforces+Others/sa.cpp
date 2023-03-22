///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll cnt[1000];
int main()
{
    ll t,i;
    cin >> t;
    ll arr[t];
    vector<ll>v;
    for(i=0;i<t;i++)
        cin >> arr[i];
    for(i=t-1;i>=0;i--)
    {
        if(cnt[arr[i]]==0)
            {
                v.push_back(arr[i]);
                cnt[arr[i]]++;
            }
    }
    cout << v.size() << endl;
    for(i=v.size()-1;i>=0;i--)
        cout << v[i] << " ";
    cout << endl;
}
