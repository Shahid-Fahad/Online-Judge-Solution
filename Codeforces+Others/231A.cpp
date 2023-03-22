#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p,s=0;
    cin >> p;
    while(p--)
    {
        cin >> a >> b >> c;
        if(a==1&&b==1||a==1&&c==1||b==1&&c==1)
            s++;
    }
    cout << s << endl;
}
