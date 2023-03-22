#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,e=0,cn=0,j;
    string s;
    cin >> r >> c;
    char ck[r][c];
    for(i=0; i<r; i++)
    {
        cin >> s;
        for(j=0; j<c; j++)
        {
            ck[i][j]=s[j];
        }
    }
    for(i=0; i<r; i++)
    {
        cn=0;
        for(j=0; j<c; j++)
        {
            if(ck[i][j]=='S')
            {
                cn=0;
                break;
            }
            else
            {
                cn++;
            }

        }
        if(cn==c)
           {
               e=e+c;
        for(j=0; j<c; j++)
        {

                ck[i][j]='e';

        }
           }
    }

    for(j=0; j<c; j++)
    {
        cn=0;
        for(i=0; i<r; i++)
        {
            if(ck[i][j]=='S')
            {
                cn=0;
                break;
            }
            else if(ck[i][j]=='.')
                cn++;
        }
        if(cn!=0)
            e = e+cn;
    }
    cout << e << endl;

}
