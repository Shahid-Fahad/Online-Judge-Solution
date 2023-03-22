#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    c = a+b;
    cout << c << endl;
    swap(a[0],b[0]);
    cout << a << " " << b << endl;

}
