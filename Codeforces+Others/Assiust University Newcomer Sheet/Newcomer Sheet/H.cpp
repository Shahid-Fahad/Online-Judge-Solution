#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,c=0;
    string s;
    cin >>t;
    while(t--)
    {
        c=0;
        cin >> s;
        for(i=0; i<s.size(); i++)
        {
            if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')||(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'))
            {
                cout << "Good" << endl;
                c=1;
                break;
            }
        }
        if(c==0)
        cout << "Bad" << endl;
    }
}
