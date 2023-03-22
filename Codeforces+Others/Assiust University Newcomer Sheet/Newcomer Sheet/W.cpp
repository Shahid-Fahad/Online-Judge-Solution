#include<bits/stdc++.h>
using namespace std;
int main()
{
    string o="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string k="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string s;
    int q,i,j;
    cin >> q >> s;
    if(q==1)
    {
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<o.size();j++)
            {
                if(s[i]==o[j])
                    cout << k[j];
            }
        }
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<k.size();j++)
            {
                if(s[i]==k[j])
                    cout << o[j];
            }
        }
    }
}
