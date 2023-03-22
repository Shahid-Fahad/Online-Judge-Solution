#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,m;
    vector <int> v;
    cin >> n >> m;
    int arr[m] = {0};
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]>=1&&v[i]<=m)
            arr[v[i]-1]++;
    }
    for(i=0;i<m;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
