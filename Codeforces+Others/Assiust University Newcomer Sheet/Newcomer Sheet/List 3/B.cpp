#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=10)
        {
            printf("A[%d] = %d\n",i,v[i]);

        }
    }
    return 0;
}
