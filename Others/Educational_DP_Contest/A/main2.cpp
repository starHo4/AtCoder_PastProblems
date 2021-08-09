#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
const int INF = INT32_MAX / 2;
int main()
{
    int N;
    cin >> N;
    vector<int> h(N);
    vector<int> dp(N + 10, INF);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    dp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
    }
    cout << dp[N - 1] << endl;
}