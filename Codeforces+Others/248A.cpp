#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,rk,lk,ok,zk,rz=0,ro=0,lz=0,lo=0,x;
    cin >> n;
    x=n;
    while(n--)
    {
        cin >> a >> b;
       if(a==0)
        rz++;
       else
        ro++;
        if(b==0)
        lz++;
       else
        lo++;
         rk = (x-rz)+(x-lo);
         lk = (x-ro)+(x-lz);
         ok = (x-ro) + (x-lo);
         zk = (x-rz) + (x-lz);
    }
    cout << min(min(rk,lk),min(ok,zk)) << endl;
}
