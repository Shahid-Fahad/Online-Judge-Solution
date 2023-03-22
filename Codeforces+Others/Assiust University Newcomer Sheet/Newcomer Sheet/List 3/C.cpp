#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x,c;
    cin >> n;
    vector<long long int> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> c;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==c)
        {
            cout << i << endl;
            return 0;

        }
    }
        cout << "-1" << endl;
    return 0;
}

