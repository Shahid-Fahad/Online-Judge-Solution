#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    while(1)
    {
        int s;
        cin >> s;
        if(s<0)
            break;
        cout << "Case " << i << ": ";
        i++;
        int c=1,p=0;
        while(c<s)
        {
            c = c*2;
            p++;
        }
        cout << p << endl;

    }
}

