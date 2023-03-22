#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,xe,x;
    double xo;
    cin >> n >> k;
    if(n%2==0)
    {
        xo = ceil(n/2.00);
        xe = n/2;
        if(k<=xo)
        {
            x = k+(k-1);
        }
        else
            x = k-(n-k);
    }
    else
    {
        xo = ceil(n/2.00);
        xe = n/2;
        if(k<=xo)
        {
            x = k+(k-1);
        }
        else
            x = k-(n-k+1);
    }
    cout << x << endl;
}
