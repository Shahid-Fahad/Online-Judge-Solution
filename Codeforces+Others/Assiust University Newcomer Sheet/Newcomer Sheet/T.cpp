#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0;
    string k;
    getline(cin,k);
    for(i=0; i<k.size(); i++)
    {
        if(k[i]=='u'&&k[i+1]=='s'&&k[i+2]=='e'&&k[i+3]=='r'&&k[i+4]=='n'&&k[i+5]=='a'&&k[i+6]=='m'&&k[i+7]=='e'&&k[i+8]=='=')
        {
            i = i+9;
            cout << "username: ";
                 while(k[i]!='&')
            {
                cout << k[i];
                i++;
            }
            cout << endl;
            c++;
        }
       else if(k[i]=='p'&&k[i+1]=='w'&&k[i+2]=='d'&&k[i+3]=='=')
        {
            i = i+4;
            cout << "pwd: ";
                 while(k[i]!='&')
            {
                cout << k[i];
                i++;
            }
            cout << endl;
            c++;
        }
       else if(k[i]=='p'&&k[i+1]=='r'&&k[i+2]=='o'&&k[i+3]=='f'&&k[i+4]=='i'&&k[i+5]=='l'&&k[i+6]=='e'&&k[i+7]=='=')
        {
            i = i+8;
            cout << "profile: ";
                 while(k[i]!='&')
            {
                cout << k[i];
                i++;
            }
            cout << endl;
            c++;
        }
       else if(k[i]=='r'&&k[i+1]=='o'&&k[i+2]=='l'&&k[i+3]=='e'&&k[i+4]=='=')
        {
            i = i+5;
            cout << "role: ";
                 while(k[i]!='&')
            {
                cout << k[i];
                i++;
            }
            cout << endl;
            c++;
        }
       else if(k[i]=='k'&&k[i+1]=='e'&&k[i+2]=='y'&&k[i+3]=='=')
        {
            i = i+4;
            cout << "key: ";
                 while(i!=k.size())
            {
                cout << k[i];
                i++;
            }
            cout << endl;
            c++;
        }
        if(c==5)
        {
            break;
        }

    }
}
