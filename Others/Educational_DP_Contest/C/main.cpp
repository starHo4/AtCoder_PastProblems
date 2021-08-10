#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<vector<int> > a(N, vector<int>(3));
    for (int i = 0; i < N; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    vector<vector<int> > dp(N + 1, vector<int>(3, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j == k)
                {
                    continue;
                }
                dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
}