///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,i;
    cin >> n;
    if(n==0)
        cout << 1 << endl;
   else if(n%4==0)
        cout << 6 << endl;
    else if(n%4==3)
        cout << 2 << endl;
    else if(n%4==2)
        cout << 4 << endl;
    else
        cout << 8 << endl;
}
