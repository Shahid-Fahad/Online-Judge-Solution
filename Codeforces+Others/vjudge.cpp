///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
//#define endl '\n'
vector<ll>pf;
void primeFactors(long long int n)
{
    ///sod law = ((r^(p+1)-1)/(r-1))x......until kth
    ll nod=0,sod=1,pw=1;
    if(n%2==0)
    {
        while (n % 2 == 0)
        {
            pf.push_back(2);
            n = n/2;
        }
    }
    for ( int i = 3; i*i<= n; i = i + 2)
    {
        if(n%i==0)
        {
            while (n % i == 0)
            {
                pf.push_back(i);
                n = n/i;
            }
        }
    }
    if(n>2)
    {
        pf.push_back(n);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,s=0,x,i;
    cin >> x;
    primeFactors(x);
    cout << x << ": ";
    for(i=0; i<pf.size(); i++)
    {
        cout << pf[i];
        if(i!=pf.size()-1)
            cout << " ";
    }
    cout << endl;


}
