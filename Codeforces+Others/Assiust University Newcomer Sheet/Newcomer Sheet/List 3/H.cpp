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
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
