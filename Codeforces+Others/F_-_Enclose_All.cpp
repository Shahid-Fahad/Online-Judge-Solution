///Bismillahir Rahmanir Rahim
//ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a,b) memset(a,b,sizeof(a))
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()

const ll mod=1e9+7;
ll Pow(ll c,ll d){return d==0? 1:c*pow(c,d-1);}

//Starts From Here
const double INF = 1e18;
struct Point {
    double X, Y;
};
struct Circle {
    Point C;
    double R;
};
double dist(const Point& a, const Point& b)
{
    return sqrt(pow(a.X - b.X, 2)
                + pow(a.Y - b.Y, 2));
}
bool is_inside(const Circle& c, const Point& p)
{
    return dist(c.C, p) <= c.R;
}
Point get_circle_center(double bx, double by,
                        double cx, double cy)
{
    double B = bx * bx + by * by;
    double C = cx * cx + cy * cy;
    double D = bx * cy - by * cx;
    return { (cy * B - by * C) / (2 * D),
             (bx * C - cx * B) / (2 * D) };
}
Circle circle_from(const Point& A, const Point& B,
                   const Point& C)
{
    Point I = get_circle_center(B.X - A.X, B.Y - A.Y,
                                C.X - A.X, C.Y - A.Y);

    I.X += A.X;
    I.Y += A.Y;
    return { I, dist(I, A) };
}
Circle circle_from(const Point& A, const Point& B)
{
    Point C = { (A.X + B.X) / 2.0, (A.Y + B.Y) / 2.0 };
    return { C, dist(A, B) / 2.0 };
}
bool is_valid_circle(const Circle& c,
                     const vector<Point>& P)
{
    for (const Point& p : P)
        if (!is_inside(c, p))
            return false;
    return true;
}
Circle min_circle_trivial(vector<Point>& P)
{
    assert(P.size() <= 3);
    if (P.empty()) {
        return { { 0, 0 }, 0 };
    }
    else if (P.size() == 1) {
        return { P[0], 0 };
    }
    else if (P.size() == 2) {
        return circle_from(P[0], P[1]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {

            Circle c = circle_from(P[i], P[j]);
            if (is_valid_circle(c, P))
                return c;
        }
    }
    return circle_from(P[0], P[1], P[2]);
}
Circle welzl_helper(vector<Point>& P,
                    vector<Point> R, int n)
{
    if (n == 0 || R.size() == 3) {
        return min_circle_trivial(R);
    }
    int idx = rand() % n;
    Point p = P[idx];
    swap(P[idx], P[n - 1]);
    Circle d = welzl_helper(P, R, n - 1);
    if (is_inside(d, p)) {
        return d;
    }
    R.push_back(p);
    return welzl_helper(P, R, n - 1);
}

Circle welzl(const vector<Point>& P)
{
    vector<Point> P_copy = P;
    random_shuffle(P_copy.begin(), P_copy.end());
    return welzl_helper(P_copy, {}, P_copy.size());
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,tc=0;
    //cin >> t;
    while(t--)
    {
        //tc++;case_(tc);
        vector<Point>v;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            double x,y;
            cin>>x>>y;
            v.pb({x,y});
        }
        Circle mec=welzl(v);
        // center mec.C.X mec.C.X
        cout <<fixed <<  setprecision(18) << mec.R << endl;

    }
}

