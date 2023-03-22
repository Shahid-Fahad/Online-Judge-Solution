#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i;
    cin >> a;
    for(i=0;i<a.size();i++)
    {
       if(isupper(a[i]))
        a[i] = a[i] +32;
       else
        a[i] = a[i]-32;
    }
    cout << a << endl;
}
