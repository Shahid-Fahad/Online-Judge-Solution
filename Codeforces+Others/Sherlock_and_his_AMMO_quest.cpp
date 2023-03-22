#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr0(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for (ll i=1;i<=n;i++)
#define ff first
#define ss second
#define sp " "
#define SHAWON ios_base::sync_with_stdio(false)
bool com(pair<string,ll>a,pair<string,ll>b){
    if(a.ss!=b.ss){
            if(a.ss>b.ss){
                return true;
            }

             return false;


    }
    else{
        if(a.ff<b.ff)
            return true;

            return false;
    }

}


int main()
{
     SHAWON;
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<string,ll>>vec(n);
    fr0(i,n){
        cin>>vec[i].ff>>vec[i].ss;
    }
    sort(vec.begin(),vec.end(),com);
    fr0(i,n){
    cout<<vec[i].ff<<sp<<vec[i].ss<<endl;
    }
    //cout<<endl;
    //sort(vec.begin(),vec.end(),least);
    //fr0(i,n){
    ////cout<<vec[i].ff<<sp<<vec[i].ss<<endl;
    //}
    return 0;
}
