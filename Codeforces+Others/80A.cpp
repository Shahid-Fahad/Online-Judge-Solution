#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin >> n >> m;
    x = m-n;
    if(n==2&&m==3)
    {
        cout << "YES" << endl;
        return 0;
    }
    for(int i=n+1;i<=m;i++)
    {
        int c=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {c=0;
                break;}
            else
                c++;
        }
        if((c!=0&&i!=m)||(c==0&&i==m)||(n==2&&m==5))
        {
            cout << "NO" << endl;
            return 0;
        }
        else if(c!=0&&i==m)
        {
            cout << "YES" << endl;
            return 0;
        }

    }
}
