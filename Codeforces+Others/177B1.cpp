///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,i,sum=0;
    cin >> n;
    while(n!=1)
    {
        sum = sum + n;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                n=n/i;
                break;
            }
        }
    }
    cout << sum+1 << endl;
}
