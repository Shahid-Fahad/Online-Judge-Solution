#include <bits/stdc++.h> 
 
using namespace std; 
int main() 
{ 
    // #ifndef ONLINE_JUDGE  
    //   freopen("iin.txt","r",stdin); 
    //   freopen("oout.o","w",stdout); 
    // #endif 
    int n,a,i,k; 
    char s[210]; 
 
    cin>>n>>k; 
   // cout<<n<<endl<<k;
   char j;
    for(i=0,j='a';j<='z';i++,j++) 
    { 
        s[i]=j; 
        if(i==k-1) 
            break; 
 
    } 
    int l;     
    l=strlen(s); 
    s[l]='\0'; 
   // cout<<l<<endl; 
    for(i=l,j=0;i<=n;i++,j++) 
    { 
        s[i]=s[j]; 
         
    } 
    s[n]='\0';     
    cout<<s<<endl; 
     
 
    return 0; 
}