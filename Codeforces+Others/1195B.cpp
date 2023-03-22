///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,m=0,c=0,e=0,x=1;
    cin >> n >> k;
    while(m!=n)
    {

       if(c<k||c==0)
        {
            c = c+x;
            x++;
            m++;
        }
        else
        {
            e++;
            c--;
            m++;
        }
    }
    cout << e << endl;

}

