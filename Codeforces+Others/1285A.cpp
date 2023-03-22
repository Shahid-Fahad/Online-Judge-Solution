#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,dh=0,dm;
    cin >> n;
    while(n--)
    {
        cin >> h >> m;
        dm = 60-m;
        if(m==0)
            dm=0;
        if(m>0)
            h++;
            dh = 24-h;
        cout << (dh*60)+dm << endl;
    }
}
