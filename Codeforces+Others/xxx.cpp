
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
    cout << (10^9) << endl;
    cin >> t;

    while(t--)
    {
        ll n,i,x,c=0,y,sum=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            sum = sum+x;
            if(c==0)
                y=x;
            else
                y = y^x;
            c++;
        }

        cout << y << endl;


    }

}
