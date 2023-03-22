#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=0,n2=0,i;
    string x;
    cin >> x;
    for(i=0;i<x.size();i++)
    {
        if(x[i]=='a')
            n1++;
        else
            n2++;
    }
    if(n1<n2)
        cout << (n1+n2)-(n2-n1+1) << endl;
   else if(n1==n2)
    cout << n1+n2-1 << endl;
    else
        cout << n1+n2 << endl;
}
