#include <iostream>
using namespace std;
int main()
{
    int S, T, i, j, k, ans;
    cin >> S >> T;
    ans = 0;
    for (i = 0; i <= S; i++)
    {
        for (j = 0; j <= S - i; j++)
        {
            for (k = 0; k <= S - i - j; k++)
            {
                if (i * j * k <= T)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}