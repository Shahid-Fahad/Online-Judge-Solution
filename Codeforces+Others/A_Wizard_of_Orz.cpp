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
        ll n;
        cin >> n;
        ll i;
        if(n==1)
        cout << 9;
        else if(n==2)
        cout << 98;
        else if(n==3)
        cout << 989;
        else
        {
            cout << 989;
            for(i=1;i<=n-3;i++)
        {
            if(i%10==1)
            cout << 0;
            if(i%10==2)
            cout << 1;
            if(i%10==3)
            cout << 2;
            if(i%10==4)
            cout << 3;
            if(i%10==5)
            cout << 4;
            if(i%10==6)
            cout << 5;
            if(i%10==7)
            cout << 6;
            if(i%10==8)
            cout << 7;
            if(i%10==9)
            cout << 8;
            if(i%10==0)
            cout << 9;


        }}
        cout << endl;
    }

}
