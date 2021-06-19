#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
   while(getline(cin,c))
   {
        int i;
        for(i=0;i<c.size();i++)
        {
            char x = c[i]-7;
            cout << x;
        }
        cout << endl;
   }
}

