#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e,f,g,h,i,j,k,l,m,n;
    cin >> a >> b >> c;
    vector<int>x;

        x.push_back(a+b*c);
        //x.push_back(c+a*b);
        //x.push_back(b+c*a);
        x.push_back((a+b)*c);
        //x.push_back((a+c)*b);
        x.push_back(a*(b+c));
        x.push_back(a*b*c);
        x.push_back(a+b+c);

        sort(x.begin(),x.end());

    cout<< x[x.size()-1] << endl;
}
