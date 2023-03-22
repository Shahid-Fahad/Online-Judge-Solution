#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    vector<int>v,p;
   double avg;
    while(cin>>x)
    {
        v.push_back(x);
        if(cin.get()=='\n')
            break;
    }
    x = v.size();
    if(x%2==1)
        v.erase(v.end()-1,v.end());
    p = v;
    x = x/2;
    sort(p.begin(),p.end());
    avg = ((v[v.size()-2]+v[v.size()-4]+p[p.size()-1])/3.00);
    printf("%.15f\n[",avg);
    for(i=0;i<x;i++)
        {cout << v[i];
        if(i!=x-1)
        cout << ", ";
        }
        cout << "] " << v.size() << endl;
}
