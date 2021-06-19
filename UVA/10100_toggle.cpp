///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>d;
ll c=0;
ll div(ll n)
{
    d.clear();
    ll i,x=sqrt(n);
    for(i=1; i<=x; i++)
    {
        if((n%i)==0)
        {
            if(n/i==i)
            {
                d.push_back(i);
                c++;
            }
            else
            {
                c+=2;
                d.push_back(i);
                d.push_back(n/i);
            }
        }
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1)
    {
        ll n;
        cin >> n;
        if(n==0)
            break;
        ll x = div(n);
        if(x%2==0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}
