///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n+5];
        ll s=0,pc=0;
        for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]>0)
            {
                pc++;
                s = s+arr[i];
            }
        }
        if(s==0)
        {
            cout << 0 << endl << 0 << endl;
            continue;
        }
        cout << s << endl;
        cout << pc << " ";
        for(ll i=n-pc,j=1;j<=pc;i++,j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;

    }

}
