#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int i,z=0,o=0;;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='0')
            z++;
        else
            o++;
    }
    cout << abs(z-o) << endl;
}

