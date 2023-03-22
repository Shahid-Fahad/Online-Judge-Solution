#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p=0,k=1,i,s;
    cin >> n;
    vector<long long int>v;
    v.push_back(0);
    v.push_back(1);
    for(i=1;i<50;i++)
    {
        s = p + k;
        v.push_back(s);
        swap(p,k);
        swap(k,s);

    }
        cout << v[n-1] << endl;
}
