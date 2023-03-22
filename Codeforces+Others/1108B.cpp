///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll cnt[1000000];
int main()
{
    ll n,x,y=1,mx=0,i,j;
    cin >> n;
    vector<ll>arr;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin >> mx;
        arr.push_back(mx);
        cnt[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    x = arr[n-1];
    cout << x;
    y = arr[arr.size()-2];

    for(i=0; i<arr.size(); i++)
    {
        if(x%arr[i]==0&&cnt[arr[i]]==1)
        {
            arr.erase(arr.begin()+i);
            i--;
        }
    }
    sort(arr.begin(),arr.end());
    mx = arr[arr.size()-1];
    cout << " " << mx << endl;


}
