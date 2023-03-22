#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<pair<int,int>>xd;
        int o=0,z=0;
        for(int i=0;i<n;i++)
        {
            a[i]=='1'?o++:z++;
            xd.push_back({o,z});
        }
        int temp1=0,temp2=0;
        for(int i=0;i<n;i++)
        {
            a[i]=='1'?temp1++:temp2++;
        }
        if(temp1!=o)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int cn=0;
        bool OK=true;
        for(int i=xd.size()-1;i>=0;i--)
        {
            if((cn==0 && a[i]==b[i]) || (cn==1 && a[i]!=b[i]))
                continue;
            else
            {
                if(xd[i].first!=xd[i].second)
                {
                    OK=false;
                    break;
                }
                cn^=1;
            }
        }
        if(OK)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}

