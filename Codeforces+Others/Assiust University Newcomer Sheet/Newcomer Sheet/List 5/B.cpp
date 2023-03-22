#include<bits/stdc++.h>
using namespace std;
void print(int a)
{
    for(int i=1; i<=a; i++)
    {
        cout << i;
        if(i!=a)
         cout <<" ";
    }
    cout << endl;
    return;

}
int main()
{
    int a;
    cin >> a;
    print(a);
}

