///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1="VIBGYOR";
    ll n;
    cin >> n;
    ll x = n/7;
    while(x--)
    {
        cout << s1;
    }
    ll y = n%7;
    if(y==1)
    {
        cout << "G" << endl;
    }
    if(y==2)
    {
        cout << "BG" << endl;
    }
    if(y==3)
    {
        cout << "IBG" << endl;
    }
    if(y==4)
    {
        cout << "VIBG" << endl;
    }
    if(y==5)
    {
        cout << "GVIBG" << endl;
    }
    if(y==6)
    {
        cout << "BGVIBG" << endl;
    }
   
    


}
