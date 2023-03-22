#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,c=0,MIN;
    vector <int> v;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    MIN = v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]==MIN)
            c++;
    }
    if(c%2==1)
    cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
    return 0;


}
