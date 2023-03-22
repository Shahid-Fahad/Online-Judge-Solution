///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n;
    cin >> n;
    queue<ll> q;
    vector<ll> v;
    ll arr[n + 5] = {0};
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        q.push(v[i]);
    }
    for (ll i = 1; i < n; i = i + 2)
    {
       
        arr[i] = q.front();
        q.pop();
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = q.front();
            q.pop();
        }
    }
    ll c = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
            c++;
    }
    cout << c << endl;
    for (ll i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
