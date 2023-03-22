#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=5;
    string t;
    cin >> t;
    while(i--)
    {
        string x;
        cin >> x;
        if((t[0]==x[0])||(t[1]==x[1]))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

}
