#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,aa=1,ab=1,dif,i;
        double k;
        cin >> a >> b >> c;
        if(a<c)
            cout << "1 ";
        else
            cout << "-1 ";
        if((a*b)>c)
            cout << b << endl;
        else
            cout << "-1" << endl;


    }
}

