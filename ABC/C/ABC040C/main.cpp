#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    vector<ll> dp(N, INF);
    dp[0] = 0;
    for (int i = 1; i < N; i++)
    {
        dp[i] = min(dp[i], dp[i - 1] + abs(a[i - 1] - a[i]));
        if (i > 1)
        {
            dp[i] = min(dp[i], dp[i - 2] + abs(a[i - 2] - a[i]));
        }
    }
    cout << dp[N - 1] << endl;
}