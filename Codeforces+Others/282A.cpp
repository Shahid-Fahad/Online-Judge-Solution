#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v=0;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s=="X++"||s=="++X")
            v++;
        else
            v--;
    }
    cout << v << endl;
}
