#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
    {
        if(n<0)
        return 0;
       else if(n==0)
        {
            cout << "0" << endl;
            continue;
        }
      long long int temp = n,r,i=0;
        vector<long long int>v;
        while(temp!=0)
        {
            r = temp%3;
            v.push_back(r);
            temp = temp/3;
        }
        reverse(v.begin(),v.end());
         for(i=0;i<v.size();i++)
        {
            if(v[i]>0)
                break;
        }
        for(;i<v.size();i++)
        {
            cout << v[i];
        }
        cout << endl;
        v.clear();

    }
}
