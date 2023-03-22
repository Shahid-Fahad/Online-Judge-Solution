#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
    int z;
    Point() {}
    Point(int x, int y, int z) : x(x), y(y), z(z) {}

    bool operator<(const Point &o) const
    {
        if (x != o.x)
        {
            return x < o.x;
        }
        if (y != o.y)
        {
            return y < o.y;
        }
        return z < o.z;
    }
};

vector<Point> points;
int main()
{
    int t;
    cin >> t;
    int tc=0;
    while(t--)
    {
        tc++;
        points.clear();
        vector<int>v[3];
        for(int counter = 0; counter < 5; counter++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            if(counter<2)
            {
                v[counter]={x,y,z};
            }
            points.push_back(Point(x, y, z));
        }
        cout << "Case " << tc << ": ";
        if((v[0][0]<0&&v[1][0]>0)||(v[0][1]<0&&v[1][0]>1)||(v[0][2]<0&&v[1][2]>0)||(v[0][0]>0&&v[1][0]<0)||(v[0][1]>0&&v[1][0]<1)||(v[0][2]>0&&v[1][2]<0))
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
            
        }
    }
}
