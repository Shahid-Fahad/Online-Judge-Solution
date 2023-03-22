///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,i,a,b,c;
    cin >> n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n-2;i++)
    {
        a = arr[i];
        b = arr[i+1];
        c = arr[i+2];
        if(((a+b)>c)&&((a+c)>b)&&((c+b)>a))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO" << endl;
}
