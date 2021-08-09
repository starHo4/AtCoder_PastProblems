#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
const int INF = INT32_MAX / 2;
int rec(int n, vector<int> &dp, vector<int> &h)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] < INF)
    {
        return dp[n];
    }
    int res = INF;
    res = min(res, rec(n - 1, dp, h) + abs(h[n] - h[n - 1]));
    if(n > 1){
        res = min(res, rec(n - 2, dp, h) + abs(h[n] - h[n - 2]));
    }
    return dp[n] = res;
}
int main()
{
    int N;
    cin >> N;
    vector<int> h(N);
    vector<int> dp(N, INF);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    cout << rec(N - 1, dp, h) << endl;
}