#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,q,j,b;
    cin >> n >> q;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(j=1;j<=q;j++)
    {
        cin >> b;
        if(binary_search(v.begin(),v.end(),b))
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}
