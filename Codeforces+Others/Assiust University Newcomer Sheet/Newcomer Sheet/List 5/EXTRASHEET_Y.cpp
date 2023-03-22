#include<bits/stdc++.h>
using namespace std;
 int main(){
    int s=1,t;
    cin>>t;

    while(s<=t){
        ///the bottom-left X & Y co-ordinate of the common area
        ///will be the maximum X & Y co-ordinate from the bottom-left co-ordinate of all the rectangles

        ///and the top-right X & Y co-ordinate of the common area
        ///will be the minimum X & Y co-ordinate from the bottom-left co-ordinate of all the rectangles

        int n;cin>>n;
        int BotLx[n+1],BotLy[n+1],TopRx[n+1],TopRy[n+1];
        int i=0;
        while(i<n){
            cin>>BotLx[i]>>BotLy[i]>>TopRx[i]>>TopRy[i];
            i++;
        }

        sort(BotLx,BotLx+n);
        sort(BotLy,BotLy+n);
        sort(TopRx,TopRx+n);
        sort(TopRy,TopRy+n);

        int x1,y1,x2,y2;

        x1=BotLx[n-1];
        y1=BotLy[n-1];

        x2=TopRx[0];
        y2=TopRy[0];


        ///if the bottom-left co-ordinate(x1 & y1) cross over the top-right co-ordinate(x2 & y2)
        ///the value of the common area will be 0
        if((x1>=x2) && (y1>=y2)){
            cout<<0<<endl;
            continue;
        }

        ///calculating the area
        int x,y;

        ///LENGTH:
        if((x1>=0 && x2<=0) || (x1<=0 && x2>=0)){
            x1=abs(x1);
            x2=abs(x2);
            x=x1+x2;
        }
        else{
            x1=abs(x1);
            x2=abs(x2);
            x=abs(x1-x2);
        }
        ///WIDTH:
        if((y1>=0 && y2<=0) || (y1<=0 && y2>=0)){
            y1=abs(y1);
            y2=abs(y2);
            y=y1+y2;
        }
        else{
            y1=abs(y1);
            y2=abs(y2);
            y=abs(y1-y2);
        }

    cout<<"Case #"<<s<<": "<<x*y<<endl;
    s++;
    }
 }
