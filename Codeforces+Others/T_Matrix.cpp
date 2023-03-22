#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s1=0,s2=0;
    cin>>n;
    int a[n][n];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
                s1+=a[i][j];
        }
    }
    for(int i=1,j=n; i<=n; i++,j--)

    {
        s2+=a[i][j];
    }


    cout<< abs(s1-s2);

}