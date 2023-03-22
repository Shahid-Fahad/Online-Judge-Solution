#include<bits/stdc++.h>
using namespace std;
int main()
{
    string k,p="EGYPT",q="egypt";
    cin >>k;
    int i,j,l,a[5]= {0},b[5]= {0},c[5];;
    for(i=0; i<k.size(); i++)
    {
        for(j=0; j<p.size(); j++)
        {
            if(k[i]==p[j])
            {
                a[j]++;
                break;
            }
        }
    }
    for(i=0; i<k.size(); i++)
    {
        for(l=0; l<q.size(); l++)
        {
            if(k[i]==q[l])
            {
                b[l]++;
                break;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        c[i]=a[i]+b[i];
    }
    sort(c,c+5);
    cout << c[0] << endl;

}
