#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,x,i,j,t,p;
    cin >> t;
    for(p=1; p<=t; p++)
    {
        vector<int>v1,v2;
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> x;
            v1.push_back(x);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i!=j)
                {
                    x = v1[i]+v1[j];
                    v2.push_back(x);
                }
            }
        }
        int cnt = 0;
        for(i=0; i<v2.size(); i++)
        {
            cnt = 0;
            for(j=0; j<v1.size(); j++)
            {
                if(v2[i]==v1[j])
                {
                    cnt = 1;
                }
            }
        if(cnt==0)
        {cout << "no" << endl;
        break;
        }
        }
        if(cnt==1)
            cout << "yes" << endl;
    }
    return 0;


}

