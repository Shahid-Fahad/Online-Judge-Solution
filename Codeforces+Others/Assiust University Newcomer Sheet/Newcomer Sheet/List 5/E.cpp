#include<bits/stdc++.h>
using namespace std;
void S(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x,y;
    cin >> x >> y;
    S(&x,&y);
    cout << x << " " << y<<endl;
}
