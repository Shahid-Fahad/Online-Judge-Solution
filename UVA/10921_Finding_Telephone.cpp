#include<bits/stdc++.h>
using namespace std;
int main()
{
    string k="22233344455566677778889999";
    string s;
    while(getline(cin,s))
    {
        int i;
        for(i=0;i<s.size();i++)
        {
            int u = s[i]-65;
            if(s[i]=='1'||s[i]=='-'||s[i]=='0')
                cout << s[i];
            else
                cout << k[u];
        }
        cout << endl;
    }
}
