#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin >> s;
    int i,j,k=0,n,arr[100000];
    n = s.size();
    for(i=1;i<=s.size();i++)
    {
        for(j=1;j<=s.size();j++)
        {
            if(i+j==n)
            {
                arr[k]=i;
                arr[k+1]=j;
                k = k+2;
            }
        }
    }
    for(i=0;i<sizeof(arr);i=i+2)
    {
        s1.copy(s,0,i);
        s2.copy(s,i+1,j);
        sort(s1.begin(),s1.end());

    }
}
