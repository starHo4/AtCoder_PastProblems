#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int X;
    cin >> X;
    vector<bool> dp(X + 110, false);
    dp[0] = true;
    for (int i = 0; i < X; i++)
    {
        if (dp[i])
        {
            for (int j = 0; j <= 5; j++)
            {
                dp[i + j + 100] = true;
            }
        }
    }
    if (dp[X])
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}