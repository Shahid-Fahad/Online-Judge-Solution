#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,t,n;
    cin >> t;
    for(k=1;k<=t;k++)
    {
        cin >> n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                cout <<"*";
        cout << endl;
        }
        if(k!=t)
        cout << endl;
    }
}
