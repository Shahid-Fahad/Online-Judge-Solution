#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,s="hello";
    cin>>str;
    int c=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==s[c])
            c++;
    }
    if(c==5){
        cout<<"YES";
    }
    else
        cout<<"NO";

}
