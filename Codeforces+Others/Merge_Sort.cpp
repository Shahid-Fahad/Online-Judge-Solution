///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
void merge(ll arr[],ll l, ll m, ll r)
{
    ll i1 = m + 1 - l;
    ll i2 = r - m;
    ll left[i1], right[i2];
    for (ll i = 0; i < i1; i++)
        left[i] = arr[l + i];
    for (ll j = 0; j < i2; j++)
        right[j] = arr[m + 1 + j];

    ll i = 0, j = 0, s = l;
    while (i<i1&&j<i2)
    {
            if (left[i] <= right[j])
            {
                arr[s] = left[i];
                i++;
            }
            else
            {
                arr[s] = right[j];
                j++;
            }
            s++;
        
    }
        if (i < i1)
        {
            while (i < i1)
            {
                arr[s] = left[i];
                i++;
                s++;
            }
        }
        if (j < i2)
        {
            while (j < i2)
            {
                arr[s] = right[j];
                j++;
                s++;
            }
        }
    }

void mergesort(ll arr[],ll l, ll r)
{
    if(l>=r){
        return;
    }
    ll m = (l + r) / 2;
    mergesort(arr,l, m);
    mergesort(arr,m + 1, r);
    merge(arr,l, m, r);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr,0, n - 1);
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}