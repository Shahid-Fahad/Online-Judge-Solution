#include<bits/stdc++.h>
using namespace std;
#define esp 0.0000000001


int main() {
    int n;
    double t, mn=1000000007.0;
    cin>>n>>t;
    vector<pair<double,double>>v(n);
    for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second, mn=min(mn,v[i].second);
    double l=mn, r=1000000007.0, mid, ans, ans1;
     if(mn>=0) l=-esp;
    for(int i=1;i<=100;i++){
        mid = l+(r-l)/2.0;
        ans=ans1=0.0;
        for(int i=0; i<n; i++){
            ans += (v[i].first/(mid+v[i].second));
        }
        
        if(ans>t) l=mid;
        else r=mid;
        //if(ok)
    }
    cout<<fixed<<setprecision(9)<<r<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
