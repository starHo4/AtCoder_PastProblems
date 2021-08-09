#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
typedef long long ll;
const int mod = pow(10, 9) + 7;
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> ok(N + 1, true);
    for (int i = 0; i < M; i++)
    {
        int ai;
        cin >> ai;
        ok[ai] = false;
    }
    vector<ll> dp(N + 1, 0);
    dp[0] = 1;
    for (int now = 0; now < N; now++)
    {
        for (int next = now + 1; next <= min(N, now + 2); next++)
        {
            if (ok[next])
            {
                dp[next] += dp[now];
                dp[next] %= mod;
            }
        }
    }
    cout << dp[N] << endl;
}