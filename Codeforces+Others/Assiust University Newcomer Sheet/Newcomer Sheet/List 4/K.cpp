#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int c=0,m=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='I')
            c++;
            if(c>m)
                m=c;

        else
            c--;
            if(c>m)
                m=c;


    }
    cout << m << endl;
}
