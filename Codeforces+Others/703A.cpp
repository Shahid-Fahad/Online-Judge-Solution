#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,c,n,mw=0,cw=0;
    cin >> n;
    while(n--)
    {
        cin >> m >> c;
        if(m>c)
            mw++;
        else if(c>m)
            cw++;
    }
    if(mw>cw)
        cout << "Mishka" << endl;
    else if(mw<cw)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
}
