///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,x,i,j;
    cin >> n >> x;
    vector<ll>v;
    for(i=1; i<x; i++)
    {
        for(j=2; j<=n; j++)
        {
            if(n%j==0)
            {
                v.push_back(j);
                n = n/j;
                break;
            }
        }
    }
    if(n==1)
    {
        cout << "-1" << endl;
        return 0;
    }
    v.push_back(n);
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
