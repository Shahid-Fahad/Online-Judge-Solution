#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a,b,t=0,e=0;
    cin >> n >> q;
    char k;
    string s,p;
    char x[1000];
    cin >> s;
    while(gets(x))
    {

         if(x[0]=='p'&&x[1]=='u'&&x[2]=='s'&&x[3]=='h'&&x[4]=='_'&&x[5]=='b'&&x[6]=='a'&&x[7]=='c'&&x[8]=='k')
        {
            k = x[10];
            s.push_back(k);

        }
   else if(x=="pop_back")
     {
         s.erase(s.end()-1,s.end());
     }
     else if(x=="front")
        {
            cout << s[0] << endl;
        }
        else if(x=="back")
        {
            cout << s[s.size()-1] << endl;
        }
     else if(x[0]=='s'&&x[1]=='o'&&x[2]=='r'&&x[3]=='t')
     {
         a = x[5]-48;
         b = x[7]-48;
         a--,b--;
         sort(s.begin()+a,s.begin()+b+1);
     }
     else if(x[0]=='r'&&x[1]=='e'&&x[2]=='v'&&x[3]=='e'&&x[4]=='r'&&x[5]=='s'&&x[6]=='e')
     {
         a = x[8]-48;
         b = x[10]-48;
         a--,b--;
         reverse(s.begin()+a,s.begin()+b+1);
     }
     else if(x[0]=='p'&&x[1]=='r'&&x[2]=='i'&&x[3]=='n'&&x[4]=='t')
     {
         a = x[6]-48;
         a--;
         cout << s[a] << endl;
     }
     else if(x[0]=='s'&&x[1]=='u'&&x[2]=='b'&&x[3]=='s'&&x[4]=='t'&&x[5]=='r')
     {
         a = x[8]-48;
         b = x[10]-48;
         a--;
         string subs;
         subs = s.substr(a,b);
         cout << subs << endl;
     }
     char x[1000];

    }


}
