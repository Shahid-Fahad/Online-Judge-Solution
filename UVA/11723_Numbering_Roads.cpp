#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,n;
    int t=0,i;
    while(cin >> r >> n)
    {
        if(r==0&&n==0)
            break;

            t++;
        r = r-n;
        if(r>(26*n))
            cout << "Case " << t << ": " << "impossible" << endl;
        else
            cout << "Case " << t << ": " << abs(ceil(r/n)) << endl;
    }
}
