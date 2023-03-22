#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

map<char,vector<int>>mp;

void solve(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    
    for(int i=0;i<n;i++){
        mp[s[i]].push_back(i);
    }

    int ans=0;    
    
    int abhi=-1;
    int mini[m];
    int maxi[m];
    
    //for minimum sequence
    for(int i=0;i<m;i++){
        int x=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),abhi)-mp[t[i]].begin();
        int prevmin=mp[t[i]][x];
        mini[i]=prevmin;
        abhi=prevmin;
    }
    
    
    //changes in positions vector stored
    for(auto &x:mp){
        for(auto &y:x.second){
            y=-y;
        }
        sort(x.second.begin(),x.second.end());
    }
    
    abhi=-n-1;
    //for maximum
    for(int i=m-1;i>=0;i--){
        int x=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),abhi)-mp[t[i]].begin();
        int prevmin=mp[t[i]][x];
        maxi[i]=-prevmin;
        abhi=prevmin;
    }
    for(int i=1;i<m;i++){
        ans=max(ans,maxi[i]-mini[i-1]);
    }
    cout<<ans;
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}