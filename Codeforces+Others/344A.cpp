#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mag=0;
    cin >> n;
    int x,p;
    while(n--)
    {
        cin >> x;
        if(x!=p)
            mag++;
        p = x;
    }
    cout << mag << endl;
}
