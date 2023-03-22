#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,i,j,p,q;
    cin >> n >> m;
    char arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin >> arr[i][j];
    }
    cin >> p >> q;
    if(p==0||p==n||q==0||q==m)
    {
        cout << "No" << endl;
        return 0;
    }
        p = p-1;
        q = q-1;
    if(arr[p-1][q-1]=='.'||arr[p-1][q+1]=='.'||arr[p+1][q-1]=='.'||arr[p+1][q+1]=='.'||arr[p+1][q]=='.'||arr[p-1][q]=='.'||arr[p][q+1]=='.'||arr[p][q-1]=='.')
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
