#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        double l,w,wh,l1,l2,r;
        cin >> r;
        l = r*5;
        l1 = l*0.45;
        l2 = l*0.55;
        w = l*0.6;
        wh = w/2;
        cout << "Case " << i <<":"<< endl;
        cout << -(l1) << " " << wh << endl;
        cout << l2 << " " << wh << endl;
        cout << l2 << " " << -(wh) << endl;
        cout << -(l1) << " " << -(wh) << endl;

    }
}
