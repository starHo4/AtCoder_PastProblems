#include <iostream>
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
    if(ok[1]){
        dp[1] = dp[0];
    }
    for (int i = 2; i < N + 1; i++)
    {
        if(ok[i]){
            dp[i] = dp[i - 1] + dp[i - 2];
            dp[i] %= mod;
        }
    }
    cout << dp[N] << endl;
}