#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d%d",&m,&n)==2)
    {
        int i,j,k,x,p=0,c=0;
        for(i=1;i<=m;i++)
        {
            p=0;
            for(j=1;j<=n;j++)
            {
                cin >> x;
                if(x>0)
                    p++;
            }
            if(p==n)
                c++;
        }
        cout << c << endl;
    }
}
