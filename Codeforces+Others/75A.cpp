#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,xa=0,xb=0,xc=0,i,r,pos;
    cin >> a >> b;
    c =  a+b;
    pos=1;
    while(a!=0)
    {
        r=a%10;
        if(r!=0)
        {
            xa = (pos*r)+xa;
            pos = pos*10;
        }
        a = a/10;
    }

    pos=1;
    while(b!=0)
    {
        r=b%10;
        if(r!=0)
        {
            xb = (pos*r)+xb;
            pos = pos*10;
        }
        b = b/10;
    }

    pos=1;
    while(c!=0)
    {
        r=c%10;
        if(r!=0)
        {
            xc = (pos*r)+xc;
            pos = pos*10;
        }
        c = c/10;
    }
    if((xa+xb)==xc)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
