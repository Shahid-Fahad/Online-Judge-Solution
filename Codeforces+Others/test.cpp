///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll arr[100],n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    ll pos;
    cin >> pos;
    ll j=pos;
    while(j<n-1)
    {
        arr[j]=arr[j+1];
        j++;
    }
    //arr[pos]=item;

    for(i=0;i<n-1;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
