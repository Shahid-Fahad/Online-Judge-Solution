#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    char x,p;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char>v;
        for(i=0;i<n;i++)
        {
            v.push_back(s[0]);
        }
            for(i=0;i<v.size();i++)
            {
                if(v[i]=='(')
                {
                    for(int j=i+1;j<v.size();j++)
                    {
                        if(v[j]==')')
                        {
                            v.erase(v.begin()+i);
                            v.erase(v.begin()+j);
                            i=0;
                        }
                    }

                }

            }
        for(i=0;i<v.size();i++)
        {
            cout << v[i];
        }
    }
}

