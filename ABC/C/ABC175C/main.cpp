#include <iostream>
#include <algorithm>
#include <cmath>
typedef long long ll;
using namespace std;
int main()
{
    ll X, K, D;
    cin >> X >> K >> D;
    X = abs(X);
    ll straight = min(K, X / D);
    K -= straight;
    X -= straight * D;
    if (K % 2)
    {
        cout << D - X << endl;
    }
    else
    {
        cout << X << endl;
    }
}