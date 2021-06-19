#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    char x;
    while((x=getchar()) != EOF)
    {
        int i,j,k;
        for(i=1; i<s.size(); i++)
        {
            if(x=='A'||x=='Z'||x=='~'||x=='Q')
                break;

            if(x==s[i])
                cout << s[i-1];
            if(x==' ')
            {
                cout << " ";
                break;
            }
            if(x=='\\')
            {
                cout << "]";
                break;
            }
            if(x=='\n')
            {
                cout << "\n";
                break;
            }

        }
    }
    return 0;
}
