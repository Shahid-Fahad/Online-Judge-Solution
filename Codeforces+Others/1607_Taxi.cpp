///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>=c)
    {
        cout << a << endl;
        return 0;
    }
    while(1)
    {
       
           if((a+b)>c)
        {
            cout << c << endl;
            break;
        }
        a = a+b;
        if((c-d)<a)
        {
            cout << a << endl;
            break;
        }
        c = c-d;
    }
   
    

}
