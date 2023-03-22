///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin >> n >> x;
    ll arr[n],arr2[n],arr3[100005]={0},i;
    for(i=0;i<n;i++)
    cin >> arr[i];
    arr2[n-1]=1;
    arr3[arr[n-1]]=1;
    for(i=n-2;i>=0;i--)
    {
        if(arr3[arr[i]]==0)
        {
            arr2[i]=arr2[i+1]+1;
            arr3[arr[i]]++;
        }
        else
        {
            arr2[i] = arr2[i+1];
            arr3[arr[i]]++;
        }
        

    }

    while(x--)
    {
        ll k;
        cin >> k;
        cout << arr2[k-1] << endl;
    }

}
