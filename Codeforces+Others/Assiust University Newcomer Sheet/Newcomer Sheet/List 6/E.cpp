#include<bits/stdc++.h>
using namespace std;
long long int M(long long int k) {
    int i;
    for (i = 1; ; i++) {
        if (k < i) return i - 1;
        else k -= i;
    }
}
int main()
{
    long long int x,i=1,c=0,sum=0;
    cin >> x;
    cout << M(x) << endl;
}
