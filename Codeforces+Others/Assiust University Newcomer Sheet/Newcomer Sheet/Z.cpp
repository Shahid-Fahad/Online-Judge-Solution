#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,f=0;
    string k,dump;
   while(getline(cin,k))
    {
        f=0;
       for(i=0;i<k.size();i++)
       {
           if(k[i]=='/'&&k[i+1]=='/')
            {
               if(i==0)
                    f=1;
                    break;
            }
           if(k[i]=='/'&&k[i+1]=='*')
           {
             while(cin >> dump)
             {
                if(dump=="*/")
                    break;
             }
             f=1;
             break;

           }
           //if(k[0]!='\0')
           cout << k[i];
       }
       if(f==0&&k[0]!='\0')
       cout << endl;
    }
}
