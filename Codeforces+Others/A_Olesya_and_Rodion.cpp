///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t;
    cin >> n >> t;
   ll c=0;
    if(n==1&&t==10)
    cout << "-1" << endl;
    else
    {
        cout << t;
        if(t==10)
        c=c+2;
        else
        {
            c++;
        }
        while(c!=n)
        {
            cout  << 0;
            c++;
        }
        cout << endl;

    }
    

}
