#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,k;
    cin >> k;
    while(k--)
    {
        cin >> s;
        l = s.size();
        if(l>10)
        {
            cout << s[0] << l-2 << s[s.size()-1] << endl;
        }
        else
            cout << s << endl;
    }
}
