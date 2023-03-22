///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r,c,i,j,k,mx=0,d,f;
    cin >> r >> c;
    char arr[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin >> arr[i][j];
        }
    }
    set<ll>s;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[i][j]=='G')
                d=j;
            else if(arr[i][j]=='S')
            {
                f = j;
                break;
            }

        }
            if(f<d)
            {
                cout << -1 << endl;
                return 0;
            }
        s.insert(f-d);

    }
    cout << s.size() << endl;
}



