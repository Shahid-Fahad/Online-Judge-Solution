#include<bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    cin >> k;
    int i=0;
    for(i=0; i<k.size();)
    {
        if(k[i]=='E'&&k[i+1]=='G'&&k[i+2]=='Y'&&k[i+3]=='P'&&k[i+4]=='T')
        {
            cout << " ";
            i = i+5;
        }
        else
        {
            cout << k[i];
            i++;
        }
    }
}
