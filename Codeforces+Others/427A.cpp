#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pol= 0, cri= 0, x;
    cin>>n;
    while(n--){
        cin>>x;

        if(x > 0) pol+= x;
        else if(pol > 0){
            pol--;
        }
        else cri++;
    }

    cout<< cri<<endl;
    return 0;
}
