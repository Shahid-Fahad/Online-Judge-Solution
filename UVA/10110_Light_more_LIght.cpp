#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    double n;
    while(cin >> n)
    {
        if(n==0)
            break;
        double c = sqrt(n);

        if(c-int(c)==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
