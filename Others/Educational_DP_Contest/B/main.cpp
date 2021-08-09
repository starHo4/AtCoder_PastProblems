#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
const int INF = INT32_MAX / 2;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    vector<int> dp(N, INF);
    dp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j <= min(N - 1, i + K); j++)
        {
            dp[j] = min(dp[j], dp[i] + abs(h[j] - h[i]));
        }
    }
    cout << dp[N - 1] << endl;
}