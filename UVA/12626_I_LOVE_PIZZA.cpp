#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string arr;
        cin >> arr;
        int i,j,k,ca,cr;
        int s[6];
        fill_n(s,6,0);
        sort(arr.begin(),arr.end());
        ca=0,cr=0;
        for(i=0; i<arr.size(); i++)
        {
            if(arr[i]=='M')
                s[0]++;
            if(arr[i]=='A')
                {
                    ca++;
                    if(ca%3==0)
                    s[1]++;
                }
            if(arr[i]=='R')
            {
                cr++;
                if(cr%2==0)
                s[2]++;
            }
            if(arr[i]=='G')
                s[3]++;
            if(arr[i]=='I')
                s[4]++;
            if(arr[i]=='T')
                s[5]++;
        }
        sort(s,s+6);
        cout << s[0] << endl;


    }
}
