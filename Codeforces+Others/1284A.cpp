#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,k,xi=0,xj=0,q,u,i;
    cin >> a >> b;
    string in,yi;
    vector<string>yr,x,y;
    for(i=0;i<a;i++)
    {
        cin >> in;
        x.push_back(in);
    }
     for(i=0;i<b;i++)
    {
        cin >> in;
        y.push_back(in);
    }
    cin >> t;
    while(t--)
    {
        cin >> u;
        u--;
        cout << x[u%a] << y[u%b] << endl;
    }
}
