#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,b,k,r;
    cin >> n >> m >> a >> b ;
    k = int(n/m);
    r = n-(k*m);
   long long int pa = k*b + (r*a);
   long long int pb = n*a;
   long long int pc = ceil(n/m)*b;
    cout << (min(min(pa,pb),pc)) << endl;

}
