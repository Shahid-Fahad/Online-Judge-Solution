///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j;
    cin >> n;
    vector<ll>v1,v2;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        ll a=0,b=0;
        if(arr[i]!=arr[i-1])
        {
            for(j=i;j<n;j++)
            {
                if(arr[j]!=arr[i])
                    break;
                a++;
            }
            for(j=i-1;j>=0;j--)
            {
                if(arr[j]!=arr[i-1])
                    break;
                b++;
            }
            v1.push_back(min(a,b));
        }
    }
    sort(v1.begin(),v1.end());
    cout << 2*v1[v1.size()-1] << endl;

}

