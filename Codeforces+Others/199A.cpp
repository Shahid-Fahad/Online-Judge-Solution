///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll x,f1=0,f2=1,f=f1+f2;
    cin >> x;
    if(x==0)
      {
          cout << 0 << " " << 0 << " " << 0 << endl;
          return 0;
    }
    while(f!=x)
    {
        swap(f1,f2);
        swap(f,f2);
        f = f1+f2;
    }
    cout << 0 << " " << f1 << " " << f2 << endl;

}
