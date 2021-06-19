#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h,m;
        scanf("%d:%d",&h,&m);
        if(m!=0)
            m = 60-m;
        if(m==0)
            h = 12-h;
        else
            h = 12-h-1;
        if(h==0)
            h=12;
        if(h==-1)
            h=11;
        if(h<10)
            cout << "0";
        cout << h << ":";
        if(m<10)
            cout << "0";
        cout << m << endl;

    }
}
