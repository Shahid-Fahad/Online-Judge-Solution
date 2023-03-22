#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,k;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        k = (b-a);
        if(a==b)
            cout << 0 << endl;
        if(k>0&&k%2==0)
            cout << 2 << endl;
        else if(k>0&&k%2==1)
            cout << 1 << endl;
        if(k<0&&abs(k)%2==0)
            cout << 1 << endl;
        else if(k<0&&abs(k)%2==1)
            cout << 2 << endl;
    }
}
