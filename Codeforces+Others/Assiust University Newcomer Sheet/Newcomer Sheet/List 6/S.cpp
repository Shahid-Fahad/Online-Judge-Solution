#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    double s,n;
    cin >> a >> b >> c;
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        s = (a+b+c)/2.0;
        n = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Valid" << endl <<setprecision(8) << n << endl;
    }
    else
        cout << "Invalid" << endl;

}
