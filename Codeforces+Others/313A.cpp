#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    if(n[0]!='-')
        cout << n << endl;
    else
    {
        string ta=n,tb=n,k;
        ta.erase(ta.end()-1);
        tb.erase(tb.end()-2);
        k = min(ta,tb);
        if(k=="-0")
            k.erase(k.begin());
        cout << k << endl;
    }
}
