#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t=0,n,k,p;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k >> p;
        while(p--)
        {
            if(k==n)
            {
                k=1;
                continue;
            }
            k++;
        }
        t++;
        printf("Case %d: %d\n",t,k);
    }
}
