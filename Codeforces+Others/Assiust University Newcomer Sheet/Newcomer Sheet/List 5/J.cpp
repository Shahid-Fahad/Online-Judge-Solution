#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    double arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    double avg=0.0;
    for(i=0;i<n;i++)
    {
        avg = avg + arr[i];
    }
    cout <<setprecision(8) << avg/n <<endl;

}
