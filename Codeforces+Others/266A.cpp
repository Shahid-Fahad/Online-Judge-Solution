#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,i;
    cin >> i;
    cin >> s;
    for(i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            c++;
    }
    cout << c << endl;

}

