///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c=0,k,u,d;
        cin >> a >> b;
        while(1)
        {
            if(b>a)
                swap(a,b);
            k = a/b;
            c = c+k;
            u = a%b;
            a = b;
            b = u;
            a = a-b;
            if(min(a,b)<=0)
                break;
            c++;
        }
        cout << c << endl;
    }
}
