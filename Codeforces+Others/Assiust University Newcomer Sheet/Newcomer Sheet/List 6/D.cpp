#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q;
    cin >> a >> b >> q;
    if(q==1)
        cout << a << endl;
    else if(q==2)
        cout << b << endl;
    else
        cout << (a^b) << endl;
}
