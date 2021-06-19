#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b))
    {
        if(a==-1&&b==-1)
            break;
        int p1,p2;
        p1 = max(a,b)-min(a,b);
        p2 = min(a,b)-max(a,b)+100;
        cout << min(p1,p2) << endl;
    }
}
