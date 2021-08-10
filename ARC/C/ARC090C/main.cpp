#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> A(3, vector<int>(N + 1, 0));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    vector<vector<int>> dp(3, vector<int>(N + 1, 0));
    dp[0][0] = A[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + A[i][j + 1]);
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + A[i + 1][j]);
        }
    }
    cout << dp[1][N - 1] << endl;
}