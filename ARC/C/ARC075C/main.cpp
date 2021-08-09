#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int INF = INT32_MAX / 2;
// Solve with DP.
int main()
{
    int N;
    cin >> N;
    vector<int> s(N);
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }
    vector<int> dp(N + 1, -INF);
    dp[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        int sum = dp[i - 1] + s[i - 1];
        if(sum % 10 == 0){
            sum = 0;
        }
        dp[i] = max(sum, dp[i - 1]);
    }
    cout << dp[N] << endl;
}