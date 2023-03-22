#include<bits/stdc++.h>
using namespace std;
double eq(int a,int b)
{
    int i;
    double sum = 0;
    for(i=2;i<=b;i=i+2)
    {
       sum =sum+ double(pow(a,i));
    }
    return sum;
}
int main()
{
    int x,n;
    long long int s;
    cin >> x >> n;
    s = (eq(x,n));
    cout << s << endl;
}
