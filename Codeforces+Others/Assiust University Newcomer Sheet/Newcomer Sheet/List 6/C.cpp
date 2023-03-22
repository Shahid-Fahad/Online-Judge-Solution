#include<iostream>
using namespace std;
int main()
{
    long long int a,b,i,n,no,ne;
    long double p,pe,po;
    long long int x , y ,z;
    cin >> a >> b;
    if(a>b)
        swap(a,b);
    n = (b-a)+1;
    p = (a+b)/2.0;
    if(a%2==0&&b%2==0)
    {
        ne = (n/2)+1;
        no = (n/2);
        pe = p;
        po = p;
    }
    else if(a%2==1&&b%2==1)
    {
        no = (n/2)+1;
        ne = (n/2);
        pe = p;
        po = p;
    }
    else
    {
        no = (n/2);
        ne = (n/2);
        if(a%2==0)
        {
            pe = (a+(b-1))/2.0;
            po = ((a+1)+b)/2.0;
        }
        if(a%2==1)
        {
            po = (a+(b-1))/2.0;
            pe = ((a+1)+b)/2.0;

        }


    }
    x = n*p;
    y = ne*pe;
    z = no*po;

    cout  << x << endl << y << endl <<z  <<endl;

}
