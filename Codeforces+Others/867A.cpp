#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,s=0,i=0;
    string d;
    cin >> n;
    cin >> d;
    while(i<n-1)
    {
        if(d[i]=='S'&&d[i+1]=='F')
            s++;
        if(d[i]=='F'&&d[i+1]=='S')
            f++;

            i++;
    }
    if(s>f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

