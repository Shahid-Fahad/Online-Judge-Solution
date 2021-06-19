#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
       long long int a,b,c;
        cin >> a >> b >> c;
       cout << "Case " << i;
       if(a<=20&&b<=20&&c<=20)
        cout << ": good" << endl;
       else
        cout <<": bad" << endl;
    }
}

