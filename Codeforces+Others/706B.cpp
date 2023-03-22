///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll sh,i,j,k,q;
    cin >> sh;
    ll arr[sh];
    for(i=0;i<sh;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+sh);
    cin >> q;
    while(q--)
    {
        cin >> k;
        j = upper_bound(arr,arr+sh,k)-arr;
        cout << j << endl;
    }

}

