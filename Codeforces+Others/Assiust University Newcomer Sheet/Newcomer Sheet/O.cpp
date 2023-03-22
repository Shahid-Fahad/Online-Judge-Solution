#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p,u=64;
    char y;
    int arr[26]={0};
    cin >> n;
    while(n--)
    {
        cin >> y;
        arr[y-97]++;

    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            for(p=1;p<=arr[i];p++)
                cout << k[i];
        }
    }
    cout << endl;
}
