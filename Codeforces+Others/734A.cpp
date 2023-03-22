#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a=0,d=0;
    string s;
    cin >> n;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout << "Anton" << endl;
    else if(d>a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

}
