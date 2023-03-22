#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,i,j;
    string s;
    cin >> a >> b;
    cin >> s;
    int cnt = 0;
    if(s[a]=='-')
    {
        cnt = 3;
        for(i=0; i<s.size(); i++)
        {
            if(i!=a)
            {
                if(!isdigit(s[i]))
                    cnt = 1;
            }
        }
    }
    if(cnt == 3)
        cout << "Yes" <<endl;
    else
        cout << "No" << endl;
}
