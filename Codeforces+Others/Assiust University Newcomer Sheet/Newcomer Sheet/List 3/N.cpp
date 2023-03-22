#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1,v2;
    int n,x,i,j;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    for(i=0;i<n-1;i++)
    {
        x = abs(v1[i]-v1[i+1]);
        v2.push_back(x);
    }

        sort(v2.begin(),v2.end());
        cout << v2[v2.size()-1] << endl;

}
