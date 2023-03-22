///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int n,t1,t2;
    cin >> n;
    t1 = 2 + ((n/2)-1)*2;
    t1 = ((n/2) * (2+t1))/2;
    if(n%2==0)
    n = n/2;
    else
    {
        n = n/2 +1;
    }
    t2 = 1 + (n-1)*(2);
    t2 = (n*(1+t2))/2;

    if(t1>t2)
    cout << t1-t2 << endl;
    else
    {
        cout << "-" << t2-t1 << endl;
    }
    
    


}
