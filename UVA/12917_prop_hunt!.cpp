#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,h,d;
    while(scanf("%d%d%d",&p,&h,&d)==3)
    {
        while(1)
        {
            if(d>p)
            {
                h--;
                d--;
            }
            if(p==d&&h>0)
            {
                cout << "Hunters win!" << endl;
                break;
            }
            if(h==0)
            {
                cout << "Props win!" << endl;
                break;
            }
        }
    }
}
