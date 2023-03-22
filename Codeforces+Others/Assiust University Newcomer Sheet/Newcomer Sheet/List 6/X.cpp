#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x[3],y[3],t,a,b,k=0;
    cin >> x[0] >>y[0] >>x[1] >>y[1] >>x[2] >>y[2] >>x[3] >>y[3];
    sort(x,x+3);
    sort(y,y+3);
    cin >> t;
    while(t--)
    {
        k=0;
        cin>> a>> b;
        if(x[0]<=a&&a<=x[3])
            k++;
        if(y[0]<=b&&b<=y[3])
            k++;
        if(k==2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}

