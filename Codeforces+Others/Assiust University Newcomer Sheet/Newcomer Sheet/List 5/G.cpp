#include<bits/stdc++.h>
using namespace std;
int* eq(int x[],int n)
{
    sort(x,x+n);
    cout << x[0]<< " " <<x[n-1] <<endl;
}
int main()
{
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++)
        cin >> x[i];
        eq(x,n);

}

