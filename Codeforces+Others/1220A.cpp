#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,z[4]={0},o[3]={0},t;
    string s;
    cin >> t;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='z')
            z[0]++;
        if(s[i]=='e')
            {
                z[1]++;
                o[2]++;
            }
            if(s[i]=='r')
            z[2]++;
            if(s[i]=='o')
            {
                z[3]++;
                o[0]++;
            }
            if(s[i]=='n')
            o[1]++;
    }
    sort(z,z+4);
    sort(o,o+3);
    for(i=1;i<=o[0];i++)
    {
        cout << "1 ";
    }
    for(i=1;i<=z[0];i++)
    {
        cout << "0 ";
    }
    cout << endl;
}

