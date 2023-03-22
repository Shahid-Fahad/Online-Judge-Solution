#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,M;
    cin >> n >> m;
    vector<int>v;
    for(i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<(m-n+1);i++)
    {
        vector<int>u;
        for(k=1,j=i;k<=n;k++,j++)
        {
            u.push_back(v[j]);
        }
        sort(u.begin(),u.end());
        if(i==0)
            M = u[u.size()-1]-u[0];
        else if(u[u.size()-1]-u[0]<M)
          M = u[u.size()-1]-u[0];

    }
    cout << M << endl;

}
