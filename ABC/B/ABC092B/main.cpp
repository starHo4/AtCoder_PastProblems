#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        ans += (D + A[i] - 1) / A[i];
    }
    ans += X;
    cout << ans << endl;
}