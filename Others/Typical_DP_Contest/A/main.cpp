#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> p(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    vector<vector<int> > dp(N + 1, vector<int>(sum + 1, 0));
    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if (!dp[i][j])
            {
                continue;
            }
            dp[i + 1][j] = 1;
            dp[i + 1][j + p[i]] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i <= sum; i++)
    {
        ans += dp[N][i];
    }
    cout << ans << endl;
}