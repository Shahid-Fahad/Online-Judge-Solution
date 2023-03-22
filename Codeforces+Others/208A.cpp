#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    string v;
    cin >> v;
    for(i=0; i<v.size(); i++)
    {
        if(v[i]=='W'&&v[i+1]=='U'&&v[i+2]=='B')
        {
            if(v[i-1]!=' ')
            {
                v[i+2]=' ';
                v.erase(v.begin()+i,v.end()-(v.size()-(i+2)));
            }
            else
                v.erase(v.begin()+i,v.end()-(v.size()-(i+3)));
            i=-1;
        }
    }
    for(i=0; i<v.size(); i++)
        if(v[i]!=' ')
            break;
    for(; i<v.size(); i++)
        cout << v[i];
    cout << endl;

}
