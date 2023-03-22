///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll pow(ll n)
{
    ll i;
    ll sum = 1;
     for (i = 1; i <= n; i++)
    {
        sum = sum * 2;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    n = pow(n);
    ll x = n / 2;
    ll arr[n + 5];
    ll mx1 = 0, mx2 = 0, i, ind1, ind2;
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx1)
        {
            mx1 = arr[i];
            ind1 = i;
        }
    }
    
    for (; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx2)
        {
            mx2 = arr[i];
            ind2 = i;
        }
    }
    if(mx1>mx2)
    cout << ind2+1 << endl;
    else
    {
        cout << ind1+1 << endl;
    }
    
}

