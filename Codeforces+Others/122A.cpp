#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,p,k,n,c=0;
    cin >> n;
    vector<int>arr;
    for(i=4; i<=1000; i++)
    {
        c=0;
        p = i;
        while(p!=0)
        {
            k = p%10;
            if(k!=4&&k!=7)
            {
                c=1;
            }

            p = p/10;
        }
        if(c==0)
            arr.push_back(i);

    }
    for(i=0;i<arr.size();i++)
    {
        if(n%arr[i]==0)
        {
            cout << "YES" << endl;
            return 0;
        }

    }
    cout << "NO" << endl;


}
