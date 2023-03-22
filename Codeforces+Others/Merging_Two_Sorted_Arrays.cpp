#include<bits/stdc++.h>
using namespace std;
int sa=5,sb=7;
int main()
{
    int a[sa]={10,30,50,70,90},b[sb]={44,55,66,77,88,99,111},c[sa+sb];
    int na=0,nb=0,nc=0;
    while(na<sa&&nb<sb)
    {
        if(a[na]<b[nb])
        {
            c[nc] = a[na];
            nc++;
            na++;
        }
        else
        {
            c[nc] = b[nb];
            nc++;
            nb++;
        }
    }
    if(sa>na)
    {
        while(na<sa)
        {
            c[nc]=a[na];
            nc++;
            na++;
        }
    }
    else
    {
        while(nb<sb)
        {
            c[nc]=b[nb];
            nc++;
            nb++;
        }
    }
    for(int i=0;i<sa+sb;i++)
        cout << c[i] << " ";
    cout << endl;
}
