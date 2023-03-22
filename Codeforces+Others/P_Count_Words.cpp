#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string str;
    getline(cin,str);
 
    int cnt = 1;
 
	for(int i = 0;i<str.size();i++)
	{
		if(str[i]==' '&&isalpha(str[i+1]))
		{
			cnt++;
		}
	}
 
    cout<<cnt<<endl;
}