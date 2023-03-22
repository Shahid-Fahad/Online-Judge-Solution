#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        if(s[0]=='o'&&s[1]=='p')
            cout << "FILIPINO" << endl;
        if((s[0]=='u'&&s[1]=='s'&&s[2]=='e'&&s[3]=='d')||(s[0]=='u'&&s[1]=='s'&&s[2]=='a'&&s[3]=='m'))
            cout << "JAPANESE" << endl;
        if(s[0]=='a'&&s[1]=='d'&&s[2]=='i'&&s[3]=='n'&&s[4]=='m')
            cout << "KOREAN" << endl;
    }
}
