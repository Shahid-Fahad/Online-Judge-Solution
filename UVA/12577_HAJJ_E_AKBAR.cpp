#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    while(1)
    {
        string s;
        cin >> s;
        if(s=="*")
            break;
        cout << "Case " << i << ": ";
        i++;
        if(s=="Hajj")
        cout << "Hajj-e-Akbar" << endl;
        else if(s=="Umrah")
            cout << "Hajj-e-Asghar" << endl;

    }
}

