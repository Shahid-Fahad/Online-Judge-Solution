///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
//bool mark[100000000];
unsigned ll f(unsigned ll n)
{
    if (n == 0)
        return 1;
    return n*f(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,j;
    cin >> t;
    for(j=1; j<=t; j++)
    {
        cout << "Case " << j << ": ";
        ll n,i,tar=5,s=0,d=0,t=0,q=0,p=0,impc=0;
        cin >> n;
        while(1)
        {
            ll x=0;
            s++;
            t=s;
            while(t!=0)
            {
                x = x + t/5;
                t = t/5;
            }
            if(x==n)
            {
                cout << s << endl;
                break;
            }
            if(x>n)
            {
                cout << "impossible" << endl;
                break;
            }

        }

    }

}


