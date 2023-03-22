#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        string s1,s2,cs1,cs2;
        cs2 = s.substr(1,s.size()-1);
        cs1 = s.substr(0,s.size()-1);
        s1=s[s.size()-1]+cs1;
        s2=cs2+s[0];
        if(s1==s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}
