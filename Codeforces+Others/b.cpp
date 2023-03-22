#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int k = s.size(),m=0;
        for(int i=0;i<k;)
        {
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
            {
                s.erase(s.begin(),s.begin()+2);
                i= i+2;
                m++;
            }
            else
            {
                break;
            }

        }
        if(m%2==1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
}
}

