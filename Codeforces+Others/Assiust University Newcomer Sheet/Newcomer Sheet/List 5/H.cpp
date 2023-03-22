#include<bits/stdc++.h>
using namespace std;
void n(int a,string b)
{
    for(int i=1;i<=a;i++)
    {
        cout << b << " ";
    }
    cout << endl;
}
int main()
{
    int a,t;
    string b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
         n(a,b);
    }
}
