#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,k="abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int i,j,arr[26]={0},p=0;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        for(j=0;j<k.size();j++)
        {
            if(s[i]==k[j])
                arr[j]=arr[j]+1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
            cout << k[i] <<" : " << arr[i] <<endl;
    }
}
