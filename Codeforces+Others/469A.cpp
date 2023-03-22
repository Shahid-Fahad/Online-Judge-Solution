#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=2,z=0;
    vector<int>v;
    cin >> n;
    while(l--)
    {
        int x,i;
        cin >> x;
        if(x==0)
        z++;
        if(z==2)
        {cout << "Oh, my keyboard!" << endl;
        return 0;}
        while(x--)
        {
            cin >> i;
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    int c=0,i;
    for(i=1;i<v.size();i++)
    {
        if(v[i]!=v[i-1])
            c++;
    }
    if(v[0]>0)
        c++;
    if(c==n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}
