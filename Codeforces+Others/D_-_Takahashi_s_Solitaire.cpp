#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    int cnt=0;
    int n;
    cin>>n;
    deque<int> d(n);
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        
            mp[d[i]]=i;
          
    }
    deque<int> copy=d;
    sort(copy.begin(),copy.end());
    bool success=true;
    for(int i=0;i<n;i++)
    {
        if(d[i]!=copy[i])
        {
            success=false;
        }
    }
    if(success)
    {
        cout<<cnt<<endl;
        return 0;
    }
    int matchValue=mp[copy[copy.size()-1]];
    int i=n-1;
    while(1)
    {

        if(i==matchValue)
        {
            break;
        }
        int currentValue=d.back();
        d.pop_back();
        d.push_front(currentValue);
        cnt++;
        i--;
    }
    success=true;
    for(int i=0;i<n;i++)
    {
        if(d[i]!=copy[i])
        {
            success=false;
        }
    }
    if(success)
    {
        cout<<cnt<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}