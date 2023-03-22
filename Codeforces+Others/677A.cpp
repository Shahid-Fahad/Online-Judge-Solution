#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,s=0,x;
    cin >> n >> h;
    while(n--)
    {
        cin >> x;
        if(x>h)
            s = s+2;
        else
            s++;
    }
    cout << s << endl;
}
