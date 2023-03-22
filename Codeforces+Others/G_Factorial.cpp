#include<bits/stdc++.h>
using namespace std ;

#define         all(cont)       cont.begin(),cont.end()
#define         ll              long long
#define         pb              push_back
#define         ff              first
#define         ss              second
#define         nl              "\n"


int main(){
    ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL) ;

    int t, cs = 0 ;
    cin>> t ;

    while(t--){
        int n, m ;
        cin>> n >> m ;
        m = n / m ;

        vector<int> arr(n) ;
        for(int &el: arr) cin>> el ;

        int q ;
		long long move = 0 ;
        cin>> q ;

        while(q--){
            int a, b ;
            cin>> a >> b ;

            if(a == 0) move += b ;
            else move -= b ;
        }
        
        move = ( (move % m) + m ) % m ;
        

        cout<< "Case " << ++cs << ": " ;
        for(int i = 0; i < n; i += m){
            for(int j = i+m-move; j < i+m; j++)
                cout<< arr[j] << " " ;
            for(int j = i; j < i+m-move; j++)
                cout<< arr[j] << " " ;
        }
        cout<< "\n" ;

    }

    
    return 0 ;
}