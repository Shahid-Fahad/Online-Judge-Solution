#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(1)
    {
        cin >> str;
        int a,b,flag=0;
        for(int i=0,a=0,b=str.size()-1; i<str.size()/2; i++)
        {
            if(((str[a]>='a'&&str[a]<='z')||(str[a]>='A'&&str[a]<='Z'))&&((str[b]>='a'&&str[b]<='z')||(str[b]>='A'&&str[b]<='Z')))
            {
                cout << str[a] << " " << str[b] << " " << abs(str[a]-str[b]) << endl;
                if((abs(str[a]-str[b])!=0)&&(abs(str[a]-str[b])!=32))
                {
                    flag=1;

                }
                a++;
                b--;
            }
            else
            {
                if((str[a]<'a'||str[a]>'z')&&(str[a]<'A'||str[a]>'Z'))
                    a++;
                else if((str[b]<'a'||str[b]>'z')&&(str[b]<'A'||str[b]>'Z'))
                    b--;
            }

        }
        if(flag==1)
            cout << "Uh...Oh!" << endl;
        else
            cout << "NOT Eaten" << endl;
    }
}

