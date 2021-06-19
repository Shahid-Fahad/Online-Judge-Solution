#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int s;
    while(scanf("%d",&s)==1)
    {
        int a,b=0,sh=0,ul=0,i;
        a = s;
        while(s!=0)
        {
            b = (b*10)+(s%10);
            s = s/10;
        }
        for(i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                sh++;
                break;
            }
        }
        for(i=2;i<=sqrt(b);i++)
        {
            if(b%i==0)
            {
                ul++;
                break;
            }
        }
        if((sh==0&&ul==0&&a!=b)||(a==2))
            cout << a << " is emirp." << endl;
        else if(sh==0)
            cout << a << " is prime." << endl;
        else
            cout << a << " is not prime." << endl;
    }
}
