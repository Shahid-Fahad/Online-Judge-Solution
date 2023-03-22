///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,k;
    cin >> n;
    if(n%2==1)
    {
        k = n/2-1;
        cout << k+1 << endl;
        while(k--)
            cout << "2" << " ";
        cout << "3" << endl;
    }
    else
    {
        k=n/2;
        cout << k << endl;
        while(k--)
            cout << "2" << " ";
        cout << endl;
    }

}
