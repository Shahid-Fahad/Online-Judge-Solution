#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==',')
            cout << " ";
            else
            cout << a[i];
    }
    cout << endl;


}



