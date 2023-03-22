///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll us,ds,l,dn,dt;
    cin >> us >> ds >> l;
    dn = us*l;
    dt = l*ds;
    ll i = 0;
    while(dt<dn)
    {
       dt = dt + ds;
       i++;
    }
    cout << i << endl;
}

