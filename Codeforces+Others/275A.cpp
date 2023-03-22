#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=3;
    while(t--)
    {
        int a,b,c,x=0,y=0,z=0;
        cin >> a >> b >> c;
        for(int i=1;i<=3;i++)
            {
                if(i==1)
                {
                    while(a--)
                    {
                        x++;
                        y++;

                    }
                }
               else if(i==2)
                {
                     while(b--)
                    {

                        x++;
                        y++;
                        z++;
                    }

                }
               else if(i==3)
                {
                     while(c--)
                    {
                        y++;
                        z++;
                    }
                }
            }
            cout << "sda  " << x << " " << y << " " << z << endl;
            if(x%2==1)
                cout << "0";
            else
                cout << "1";
            if(y%2==1)
                cout << "0";
            else
                cout << "1";
                if(z%2==1)
                cout << "0" << endl;
            else
                cout << "1"<< endl;
    }
}
