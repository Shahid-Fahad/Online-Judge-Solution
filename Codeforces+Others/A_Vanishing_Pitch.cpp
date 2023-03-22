///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ld v,t1,t2,d;
    cin >> v >> t1 >> t2 >> d;
    ld ans = (d+0.0)/(v+0.0);
    if(t1-ans>0.0000001||ans-t2>0.0000001)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    

}
