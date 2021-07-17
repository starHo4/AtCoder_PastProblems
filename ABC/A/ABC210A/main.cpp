#include <iostream>
using namespace std;
int main()
{
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;
    int ans = N * X;
    if (N > A)
    {
        ans = A * X + (N - A) * Y;
    }
    cout << ans << endl;
}