#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,x;
    cin >> y;
    x=y+1;
    while(1)
    {
        int t=x,r;
        vector<int>v;
        while(t!=0)
        {
            r = t%10;
            v.push_back(r);
            t = t/10;
        }
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==v[i+1])
                c++;
        }
        if(c==0)
        {
            cout << x << endl;
            return 0;
        }
        else
            x++;
    }
}
