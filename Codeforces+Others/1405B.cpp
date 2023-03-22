///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,sum=0,x,c=0;
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x>0)
                c=1;
            if(c==1)
                sum=sum+x;
            if(sum<0)
                sum=0;
        }
        cout << sum << endl;

    }

}

