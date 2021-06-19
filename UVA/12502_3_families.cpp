#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,a,b,y;
        double n;
        cin >> a >> b >> x;
        y = a+b-(a/2);
        if(y==a)
        n = x/(y+0.0);
        else
            n = x/y;
        cout << n*a << endl;

    }
}
