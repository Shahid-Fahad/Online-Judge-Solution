#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,g;
    string s,b;
    while(1)
    {
        cin >> n;
        if(n==0)
        return 0;
        cin >> s;
        int l = s.size();
        int i=0,j=i+(l/n);
        while(n--)
        {
            string m;
            m = s.substr(i,j);
            reverse(m.begin(),m.end());
            s.erase(i,j);
            cout << m;
        }
        cout << endl;

    }
}
