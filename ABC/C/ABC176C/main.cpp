#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int mx = -1;
    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        mx = max(mx, A[i]);
        ans += mx - A[i];
    }
    cout << ans << endl;
}