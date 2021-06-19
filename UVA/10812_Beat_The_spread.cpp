#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      long long int a,b,ra,rb;
        cin >> a >> b ;
        ra = (a+b)/2;
        rb = a-ra;
            if(rb<0||(a+b)%2!=0)
            cout << "impossible" << endl;
        else
            cout << ra << " " << rb << endl;
    }
}
