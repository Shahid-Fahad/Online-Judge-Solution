///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r1,r2,c1,c2,d1,d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    ll i,j,k,l;
    ll c=0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            for(k=1;k<=9;k++)
            {
                for(l=1;l<=9;l++)
                {
                    if(i==j||i==k||i==l||j==k||j==l||k==l)
                    continue;
                    if(i+j==r1&&k+l==r2&&i+k==c1&&j+l==c2&&i+l==d1&&j+k==d2)
                    {
                        cout << i << " " << j << endl;
                        cout << k << " " << l << endl;
                        return 0;
                    }
                }
            

            }
        }
    }
    cout << -1 << endl;

}
