#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string d = "hello";
    int i,c=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==d[c])
            c++;
    }
    if(c==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
