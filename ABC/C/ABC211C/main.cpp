#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = pow(10, 9) + 7;
const char target[] = {'c', 'h', 'o', 'k', 'u', 'd', 'a', 'i'};
int main()
{
    string S;
    cin >> S;
    int N = S.size();
    vector<vector<ll>> dp(N + 1, vector<ll>(9, 0));
    for (int i = 0; i <= N; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (S[i - 1] != target[j - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
                dp[i][j] %= mod;
            }
        }
    }
    cout << dp[N][8] << endl;
}