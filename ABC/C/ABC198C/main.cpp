#include <iostream>
#include <cmath>
using namespace std;
typedef pair<double, double> pdd;
double dist(double X, double Y, double nowX, double nowY)
{
    return sqrt(pow(X - nowX, 2) + pow(Y - nowY, 2));
}
pdd normalize(pdd v)
{
    double d = dist(v.first, v.second, 0, 0);
    if (d == 0)
    {
        return make_pair(0, 0);
    }
    v.first /= d;
    v.second /= d;
    return v;
}
int compassWalk(double &R, double &X, double &Y, double nowX, double nowY)
{
    double d = dist(X, Y, nowX, nowY);
    if (d == 0)
    {
        return 0;
    }
    if (d == R)
    {
        return 1;
    }
    if (d < 2 * R)
    {
        return 2;
    }
    int num = d / R - 1;
    pdd v = make_pair(X - nowX, Y - nowY);
    v = normalize(v);
    return num + compassWalk(R, X, Y, R * num * v.first + nowX, R * num * v.second + nowY);
}
int main()
{
    double R, X, Y;
    cin >> R >> X >> Y;
    int ans = compassWalk(R, X, Y, 0, 0);
    cout << ans << endl;
}