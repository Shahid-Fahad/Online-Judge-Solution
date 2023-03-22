#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,minsum,j,c,t,p;
    vector<int>v,sum;
    cin >> t;
    for(p=1; p<=t; p++)
    {
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for(i=0; i<v.size(); i++)
        {
            for(j=i+1; j<v.size(); j++)
            {
                    minsum = v[i] + v[j] + (j) - (i);
                    sum.push_back(minsum);

            }
        }
        sort(sum.begin(),sum.end());
        cout << sum[0] << endl;

       v.erase(v.begin(),v.end());
       sum.erase(sum.begin(),sum.end());
    }
    return 0;
}
