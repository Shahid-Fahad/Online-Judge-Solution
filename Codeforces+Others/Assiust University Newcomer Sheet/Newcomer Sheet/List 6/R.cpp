#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    double d;
    cin >> x1 >> y1 >> x2 >> y2;
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout <<setprecision(10) << d << endl;
}
