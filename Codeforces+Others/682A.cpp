///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll m,n,i,j,c=0,u,x;
    cin >> m >> n ;
    u = (m/5)*n;
    for(i=((m/5)*5)+1;i<=m;i++)
    {
            x = ((i/5)+1)*5;
            ll  p=0;
        while(x-i<=n)
        {
                p++;
                c++;
                x = x+5;
        }
    }
    cout << u+c  << endl;

}
