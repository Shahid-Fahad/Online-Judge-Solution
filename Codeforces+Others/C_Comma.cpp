///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s = to_string(n);
    ll k = s.size();
    ll lim=1;
    for(ll i=1;i<=k-1;i++)
    {
        lim = lim*10;
    }
    ll non = abs(n-lim)+1;
    ll arr[25];
    for(ll i=20;i>=1;i--)
    {
        if(i<=3)
        {
            arr[i]=0;
        }
        else
        {
            if(i%3==0)
            {
                arr[i] = (i/3)-1;
            }
            else
            {
                arr[i] = (i/3);
            }

        }
        
    }
    ll sum = arr[k]*non;
    k--;
    ll d=9000;
    for(ll i=4;i<=k;i++)
    {
        sum = sum+(d*arr[i]);
        d=d*10;
    }
    cout << sum << endl;
    



}
