#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
    string s;
    while(1)
    {
        int i=0,j=0;
        getline(cin,s);
        string rev;

        if(s=="DONE")
            break;
        for(i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                rev.push_back(toupper(s[i]));
            }
        }
        s = rev;
        reverse(rev.begin(),rev.end());
        if(s==rev)
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;


    }
}
