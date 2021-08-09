#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int A, B, K;
    cin >> A >> B >> K;
    vector<int> ans;
    if (B - A + 1 <= 2 * K - 1)
    {
        for (int i = 0; i < B - A + 1; i++)
        {
            ans.push_back(A + i);
        }
    }
    else
    {
        for (int i = 0; i < K; i++)
        {
            ans.push_back(A + i);
        }
        for (int i = 0; i < K; i++)
        {
            ans.push_back(B - i);
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}