#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    vector<int> v,p;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
        p.push_back(x);
    }
    sort(p.begin(),p.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]==p[0])
        {
            v[i] = p[v.size()-1];
        }

        else if(p[v.size()-1]==v[i])
        {
            v[i]=p[0];
        }
    }
      for(i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
