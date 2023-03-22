///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c,i,p,sum=0;
    cin >> a >> b >> c;
    if(a>b)
    swap(a,b);
    if(a==1&&c==1)
    {
        p = (b*(b+1))/2;
        cout << p << endl;
        return 0;
    }
    if(a==1&&c==2&&b%2==0)
    {
        p = (b*(b+1))/2;
        cout << p/2 << endl;
        return 0;
    }

    ld k = ceil(a/(c+0.0));
    p = k*c;
    for(i=p;i<=b;i=i+c)
    {
        sum = sum + i;
    }
    cout << sum << endl;


}
