#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,f=0;
    cin>>N;
    int a1[N];
    int a2[N];
    for(i=0;i<N;i++){
        cin>>a1[i];
    }
    for(i=0;i<N;i++){
        cin>>a2[i];
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(a2[i]==a1[j]){
                f++;
                break;
            }
        }
    }
if(f==N){
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;
}