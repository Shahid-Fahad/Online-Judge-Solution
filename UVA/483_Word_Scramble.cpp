#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
       reverse(s.begin(),s.end());
       cout << s;
       if(cin.get()=='\n')
            cout << endl;
        else
        cout << " ";
    }
}
