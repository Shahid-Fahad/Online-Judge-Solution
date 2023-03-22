#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=1,i;
    cin >> s;
    sort(s.begin(),s.end());
    for(i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
            c++;
    }
    if(c%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
