#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>v;
    int i,j;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='Y'||s[i]=='U'||s[i]=='O'||s[i]=='I'||s[i]=='E'||s[i]=='y'||s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='a')
            continue;
        else
        {
            if(s[i]>=65&&s[i]<=90)
                s[i] = s[i]+32;

                v.push_back('.');
                v.push_back(s[i]);
        }
    }
    for(i=0;i<v.size();i++)
        cout << v[i];
    cout << endl;
}
