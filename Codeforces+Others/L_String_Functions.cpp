typedef long long int ll; 
#include <bits/stdc++.h> 
#include <iostream> 
  
using namespace std; 
int main() 
{ 
    int w,x,y,z,i,k=0,gf,pos; 
    int f=0,cnt=0,min=10000,max=0; 
    int arr[10000],brr[10000],j,a,b,c,dis; 
    char str[1000],ptr[1000],dp[1000][1000],tmp; 
    int n,d,m,r; 
    string s,t; 
    cin>>x>>y; 
    cin>>s; 
    while(y--) 
    { 
        cin>>t; 
        if(t=="pop_back") 
        { 
            s.pop_back(); 
        } 
        else if(t=="front") 
        { 
            cout<<s.front()<<endl; 
        } 
        else if(t=="back") 
        { 
            cout<<s.back()<<endl; 
        } 
        else if(t=="sort") 
        { 
            cin>>a>>b; 
            if(a>b) 
            { 
                swap(a,b); 
            } 
            sort(s.begin()+a-1,s.begin()+b); 
        } 
        else if(t=="reverse") 
        { 
            cin>>a>>b; 
            if(a>b) 
            { 
                swap(a,b); 
            } 
            reverse(s.begin()+a-1,s.begin()+b); 
        } 
        else if(t=="push_back") 
        { 
            char kh; 
            cin>>kh; 
            s.push_back(kh); 
        } 
        else if(t=="print") 
        { 
            cin>>a; 
            cout<<s[a-1]<<endl;
        } 
        else if(t=="substr") 
        { 
            cin>>a>>b;
            if(a >b)
            swap(a,b); 
            string st; 
            cout<<(st = s.substr(a-1,b-a+1))<<endl; 
        } 
    } 
    return 0; 
}