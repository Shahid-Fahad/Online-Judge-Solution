#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        string a,p;
        cin >> a;
        int k =0;
        for(i=0;i<a.size()-2;i++)
        {
            if((a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1')||(a[i]=='0'&&a[i+1]=='1'&&a[i+2]=='0'))
            {
                k=1;
                break;
            }
        }
        if(k==0)
        cout << "Bad" << endl;
        else
            cout << "Good" << endl;
    }
    return 0;
}
