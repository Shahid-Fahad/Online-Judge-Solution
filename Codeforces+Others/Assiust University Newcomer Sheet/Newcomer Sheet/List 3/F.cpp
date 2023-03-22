#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,x,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i=v.size()-1;i>=0;i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
