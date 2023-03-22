#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,y=0;
    cin >> a >> b;
    while(1)
    {
        y++;
        a*=3;
        b*=2;
        if(a>b)
            break;
    }
    cout << y << endl;
}
