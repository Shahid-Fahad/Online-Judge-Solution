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
    ll n,k,s=0,p=0,i;
    cin >> n >> k;
    for(i=1;i<=n;i++)
    {
        s = s + (5*i);
        if(240-s<k)
            break;
        p++;
    }
    cout << p << endl;

}
