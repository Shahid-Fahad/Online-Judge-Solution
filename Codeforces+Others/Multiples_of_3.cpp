///Bismillahir Rahmanir Rahim
//ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct node
{
    int z, o, t;
};
int lazy[400005];
node st[400005];
void build(int si , int ss, int se)
{
	if(ss == se)
	{
		st[si].z = 1;
		st[si].o = 0;
		st[si].t = 0;
		return;
	}
	
	int mid = (ss + se) / 2;
	build(2*si , ss , mid);
	build(2*si+1 , mid+1 , se);
	st[si].z = st[2*si].z + st[2*si+1].z;
	st[si].o = st[2*si].o + st[2*si+1].o;
	st[si].t = st[2*si].t + st[2*si+1].t;
}

void shift(int si)
{
	int a = st[si].t;
	st[si].t = st[si].o;
	st[si].o = st[si].z;
	st[si].z = a;
}

void update(int si , int ss , int se , int qs , int qe)
{
	if(lazy[si] != 0)
	{
		int add = lazy[si];
		lazy[si] = 0;
		if(ss != se)
		{
			lazy[2*si] += add;
			lazy[2*si+1] += add;
		}
		add %= 3;
		for(int i=0;i<add;i++)
		{
			shift(si);
		}
	}
	if(ss > qe || se < qs) return;
	
	if(ss >= qs && se <= qe)
	{
		shift(si);
		if(ss != se)
		{
			lazy[2*si]++;
			lazy[2*si+1]++;
		}
		return;
	}
	
	int mid = (ss + se) / 2;
	update(2*si , ss , mid , qs , qe);
	update(2*si+1 , mid+1 , se , qs , qe);
	
	st[si].z = st[2*si].z + st[2*si+1].z;
	st[si].o = st[2*si].o + st[2*si+1].o;
	st[si].t = st[2*si].t + st[2*si+1].t;
}

int query(int si , int ss , int se , int qs , int qe)
{
	if(lazy[si] != 0)
	{
		int add = lazy[si];
		lazy[si] = 0;
		if(ss != se)
		{
			lazy[2*si] += add;
			lazy[2*si+1] += add;
		}
		add %= 3;
		for(int i=0;i<add;i++)
		{
			shift(si);
		}
	}
	
	if(ss > qe || se < qs) {
		return 0;
	}
	
	if(ss >= qs && se <= qe)
	{
		return st[si].z;
	}
	
	int mid = (ss + se) / 2;
	int l = query(2*si , ss , mid , qs , qe);
	int r = query(2*si+1 , mid+1 , se , qs , qe);
	
	return l + r;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n , q , A , B , code;
	cin>>n>>q;
	build(1 , 1 , n);
	
	while(q--)
	{
		cin>>code>>A>>B;
		if(code == 0)
		{
			update(1 , 1 , n , A+1 , B+1);
		}
		else
		{
			cout<<query(1 , 1 , n , A+1 , B+1)<<endl;
		}
	}
}
