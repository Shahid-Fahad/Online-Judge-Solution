#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    string s,a,b;
    cin >> n >> m;
    for(i=1;i<=m;i++)
    {
        s.push_back('#');
    }
    for(i=1;i<m;i++)
    {
        a.push_back('.');
    }
    a.push_back('#');
        b.push_back('#');
    for(i=1;i<m;i++)
    {
    b.push_back('.');
    }
    int c=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            cout << s << endl;
        else
        {
            if(c%2==1)
                cout << a << endl;
            else
                cout << b << endl;
            c++;
        }
    }
}
