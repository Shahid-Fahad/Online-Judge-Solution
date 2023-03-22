#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,j;
    cin >> n;
    int arr[n];
    int arr2[3]={0};
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        arr2[arr[i]-1]++;
        v.push_back(arr[i]);
    }
    sort(arr2,arr2+3);
    s = arr2[0];
    cout << s << endl;
    for(i=1;i<=s;i++)
    {
        int oc=0,tc=0,thc=0;
        for(j=0;j<v.size();j++)
        {
            if(v[j]==1&&oc==0)
            {
                cout << j+1 << " ";
                v[j]=0;
                oc=1;
            }
           else if(v[j]==2&&tc==0)
            {
                cout << j+1 << " ";
                v[j]=0;
                tc=1;
            }
           else if(v[j]==3&&thc==0)
            {
                cout << j+1 << " ";
               v[j]=0;
                thc=1;
            }

        }
        cout << endl;
    }


}
