///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll d,r,i,j=0,k,s,x=1;
    cin >> d >> r;
    ll room[d];
    for(i=0; i<d; i++)
    {
        cin >> room[i];
    }
        ll p=room[0],q=0;
    for(i=0; i<r; i++)
    {
        cin >> k;
        for(;j<d;j++)
        {
            if(k<=p)
            {
                cout << x << " " << k-q << endl;
                break;
            }
            else
            {
                    q = p;
                    p = p + room[j+1];
                    x++;
            }

        }
    }

}

