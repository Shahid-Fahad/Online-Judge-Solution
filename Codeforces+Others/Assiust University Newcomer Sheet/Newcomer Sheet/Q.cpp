#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p,e=0;
    char c;
    string k;
    while(cin >> k)
    {
        reverse(k.begin(),k.end());
        cout << k;
        if(cin.get()!='\n')
            cout << " ";
    }
}
