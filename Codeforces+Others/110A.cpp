#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,l=0,m;
    cin >> x;
    while(x!=0)
    {
        m = x%10;
        if(m==4||m==7)
            l++;
        x/=10;
    }
    if(l==4||l==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
