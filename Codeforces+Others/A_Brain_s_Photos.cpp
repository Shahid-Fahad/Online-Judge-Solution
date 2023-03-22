///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    ll i,j,f=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            char x;
            cin >> x;
            if(x!='W'&&x!='B'&&x!='G')
            {
                cout << "#Color" << endl;
                return 0;
            }
        }
    
    }
    cout << "#Black&White" << endl;

}
