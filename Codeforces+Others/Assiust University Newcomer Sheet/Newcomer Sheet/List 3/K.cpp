#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,sum=0,rem,c=0;
    cin >> n;
    string arr;
    cin >> arr;
    for(i=0;i<arr.size();i++)
    {
        sum = sum + (arr[i]-48);
    }

    cout << sum << endl;
    return 0;

}
