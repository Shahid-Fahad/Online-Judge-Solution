#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,c=0;
    cin >> n;
    vector<int>v;
    vector<int>::iterator best,worst;
    for(i=1; i<=n; i++)
    {
        cin >> x;
        best  = max_element(v.begin(),v.end());
        worst = min_element(v.begin(),v.end());
        if(i>1)
        {
            if(x>(*best)||x<(*worst))
                c++;
        }
        v.push_back(x);
    }

    cout << c << endl;
}
