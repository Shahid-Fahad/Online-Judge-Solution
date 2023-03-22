#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    string s;
    getline(cin,s);
     for(i=0; i<s.size(); i++)
    {
        if ((isalpha(s[i]))&&!(isalpha(s[i+1])))
         c++;

    }
    cout << c << endl;
}
