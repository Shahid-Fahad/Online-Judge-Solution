#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,i,j,p;
    vector <int> a,b;
    cin >> m >> n;
    for(i=0; i<m; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for(i=0; i<n; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    for(i=0,p=0; p<m; i++,p++)
    {
        int cnt =0;
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
                cnt = 1;
        }
        if(cnt==0)
            {a.erase(a.begin()+i);
            i--;
            }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;

}
