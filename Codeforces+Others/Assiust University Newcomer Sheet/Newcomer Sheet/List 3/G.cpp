#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,c=0;
    vector<int>v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i=0,j=v.size()-1;i<=(n/2);i++,j--)
    {
        if(v[i]!=v[j])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
