#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,i,j,ca=0,cb=0,x=0;
    cin >> p;
    int a[p],b[p];
    for(i=0;i<p;i++)
    {
        cin >> a[i];
        if(a[i]==1)
            ca++;
    }
    for(i=0;i<p;i++)
    {
        cin >> b[i];
        if(b[i]==1)
            cb++;
        if(a[i]==1&&b[i]==0)
            x++;
    }
    int lim = cb-ca+1;
    if(x==0)
        cout << "-1" << endl;
   else if(ca>cb)
        cout << 1 << endl;
    else if(ca==cb)
    {
        cout << 2 << endl;
    }
    else if(cb>ca)
    {
        double u = ceil((lim+0.0)/x);

        cout << u+1 << endl;
    }
}
