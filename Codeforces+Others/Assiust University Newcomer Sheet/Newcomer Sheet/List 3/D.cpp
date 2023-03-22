#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    vector<int>v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(x>0)
            x=1;
        else if(x<0)
            x=2;
        v.push_back(x);
    }
    for(i=0;i<v.size();i++)
        cout << v[i] << " ";
    return 0;
}
