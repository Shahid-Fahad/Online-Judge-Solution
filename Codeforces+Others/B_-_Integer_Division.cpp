#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int frq[n+5];
        for(int j=1;j<=n;j++)
        {
            frq[j]=0;
        }
        for(int j=1;j<=n;j++)
        {
            int x;
            cin>>x;
            frq[x]++;
        }
        int fl=0;
        for(int j=1;j<=n;j++)
        {
            if(frq[j]>=3)
            {
                cout << j << endl;
                fl=1;
                break;
            }
        }
        if(fl==0)
        {
            cout << -1 << endl;
        }

    }
}
