#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    deque<char> q;
    int k=0;
    for(auto i:s){
        if(i>='0' && i<='9'){
            q.push_back(i);
        }
        else if(i=='.'){
            q.push_back(i);
            k++;
        }
        else{
            break;
        }
    }
    while(q.front()=='0'){
        q.pop_front();
    }
    if(k==0){
        while(q.back()=='0') q.pop_back();
    }
    cout<<q.size()-k;
}
