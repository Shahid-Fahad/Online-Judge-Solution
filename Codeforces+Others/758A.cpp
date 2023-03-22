#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    int* m;
    cin >> n;
    int k=n;
    int arr[n];
    while(n--)
    {
        cin >> arr[i];
        sum = sum+arr[i];
        i++;
    }
    m = max_element(arr,arr+k);
    cout << (k*int(*m)-sum) << endl;
}
