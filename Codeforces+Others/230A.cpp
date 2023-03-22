#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i,j;
    cin >> s >> n;
    int dr[n],bon[n];
    for(i=0; i<n; i++)
    {
        cin >> dr[i] >> bon[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(dr[i]>dr[j])
            {
                swap(dr[i],dr[j]);
                swap(bon[i],bon[j]);
            }
        }
    }
    int c=0;
    for(i=0; i<n; i++)
    {
        if(s>dr[i])
        {
            c++;
            s = s + bon[i];
        }
    }
    if(c==n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
