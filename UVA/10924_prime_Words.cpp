#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    while(cin >> s)
    {
        int j,i,sum=0,p=0;
        for(j=0; j<s.size(); j++)
        {
            for(i=0; i<m.size(); i++)
            {
                if(s[j]==m[i])
                    sum = sum + (i+1);
            }
        }
        for(i=2; i<=sqrt(sum); i++)
        {
            if(sum%i==0)
            {
                p++;
                break;
            }
        }
        if(p==0&&sum!=0)
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
}
