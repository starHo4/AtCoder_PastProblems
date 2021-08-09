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
    vector<int> dp(N + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i >= 6)
        {
            for (int j = 1; pow(6, j) <= i; j++)
            {
                int num_6 = pow(6, j);
                dp[i] = min(dp[i], dp[i - num_6] + 1);
            }
        }
        if (i >= 9)
        {
            for (int j = 1; pow(9, j) <= i; j++)
            {
                int num_9 = pow(9, j);
                dp[i] = min(dp[i], dp[i - num_9] + 1);
            }
        }
    }
    cout << dp[N] << endl;
}