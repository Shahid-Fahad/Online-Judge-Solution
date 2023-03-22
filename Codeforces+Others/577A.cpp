///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,x,i,c=0,j;
    cin >> n >> x;
    for(i=2; i<=n; i++)
    {
        if(x%i==0&&x/i<=n)
        {
            c++;
        }
    }
    if(n>=x)
        c++;
    cout << c << endl;
}
