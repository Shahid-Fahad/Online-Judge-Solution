///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>d;
void div(ll n)
{
    ll i;
    d.clear();
    for(i=1;i<=sqrt(n);i++)
    {
      if(n%i==0)
        {
            if(n/i==i)
                d.push_back(i);
            else
            {
                d.push_back(i);
                d.push_back(n/i);
            }
        }
    }
}
int main()
{
    ll t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%2==0)
        {
            cout << n/2 << " " << n/2 << endl;
        }
        else
        {
            div(n);
            sort(d.begin(),d.end());
            cout << d[d.size()-2] << " " << n-d[d.size()-2] << endl;
        }
    }
}
